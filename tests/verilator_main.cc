//该文件定义verilator的仿真激励
#include "VSoc.h"
#include "verilated_vcd_c.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cerrno>

const char* arg_vcd="vcd=";
const char* arg_signature="signature=";
const char* arg_loadbin="loadbin=";

const uint32_t codemem_start=0x8000000;
const uint32_t codemem_end=0x80001000;//4K code mem

const uint32_t sigmem_start=0x80001000;
const uint32_t sigmem_end=0x80002000;//4K signature mem

int init(int argc, char **argv);
const char* arg_parse(const char* arg);
VerilatedVcdC* generator_vcd();
void generator_signature(uint32_t _sigmem_start,uint32_t sigmem_end);
int load_bin(uint32_t _code_start);
void excitation_signal(void);

VerilatedContext* contextp;
VSoc* top;
VerilatedVcdC* tfp;

int main(int argc, char **argv, char **env)
{
	int err;
	printf("Built with %s %s.\n", Verilated::productName(), Verilated::productVersion());
	
       	err=init(argc,argv);	
	if(err) return err;

	//generator an excitation signal
	excitation_signal();
	
	//generator signature
	generator_signature(sigmem_start,sigmem_end);
	
	if(tfp){
		tfp->close();
		delete tfp;
	}
	
	delete top;
	top=nullptr;
	return 0;
}

int init(int argc, char **argv){
	//上下文管理器的初始化
	contextp = new VerilatedContext;
	contextp->debug(0);
	contextp->randReset(0);
	contextp->commandArgs(argc,argv);

	//创建顶层模块
	top=new VSoc; 
	
	// 参数分析，决定是否开始波形追踪并加载可执行文件
	// Tracing (vcd)
	tfp = generator_vcd();
	
	//load bin 
	if(load_bin(codemem_start)){
		std::cout<<"load bin失败，打开文件失败"<<std::endl;
		return errno;
	}
	
	return 0;
}

bool arg_check(const char* arg,const char* prefix_arg){
	int pos=0;
	while(prefix_arg[pos] && arg[pos+1]==prefix_arg[pos]) pos++;
	return !prefix_arg[pos];
}

//解析是否有该参数并且返回该参数等号后的字符串（例如：+vcd=/usr/test.vcd，返回结果为/usr/test.vcd）
//无该参数返回NULL
const char* arg_parse(const char* prefix_arg){
	const char* arg = contextp->commandArgsPlusMatch(prefix_arg);
	
	if(arg[0] && arg_check(arg,prefix_arg)) {
		return arg+strlen(prefix_arg)+1;
	}	
	return NULL;
}

VerilatedVcdC* generator_vcd(){
	const char* vcd_path = arg_parse(arg_vcd);
	if (!vcd_path)	return NULL;

	contextp->traceEverOn(true);

	VerilatedVcdC* tfp=new VerilatedVcdC;
	top->trace (tfp, 99);
	tfp->open(vcd_path);

	return tfp;	
}	

static inline uint32_t read_memory(uint32_t addr){
	uint32_t val;
	top->clk=0;
	top->eval();

	top->sim_in_addr=addr;	
	top->clk=1;
	top->eval();
	val=top->sim_out_rdata;	
	return val;
}

void generator_signature(uint32_t _sigmem_start,uint32_t _sigmem_end){
	// generate signature
	const char* signature_path = arg_parse(arg_signature);
	if (signature_path) {
		std::ofstream signature_file(signature_path);
		for(uint32_t addr=_sigmem_start;addr<_sigmem_end;addr+=4){
			uint32_t value = read_memory(addr);
			signature_file<<std::hex<<std::setw(8)<<std::setfill('0')<<value<<"\n";
		}
	
	}
}

static inline void write_memory(uint32_t addr,uint32_t val){
	top->clk=0;	
	top->eval();

	top->sim_in_addr=addr;	
	top->sim_in_wdata=val;
	top->sim_in_wen=0b1111;
	top->clk=1;
	top->eval();
}

#define XLEN 32
int load_bin(uint32_t _code_start){
	const char* loadbin_path= arg_parse(arg_loadbin);
	std::ifstream in_bin(loadbin_path,std::ios::binary);
	if(!in_bin.is_open()) return errno;

	in_bin.seekg(0);
	uint32_t addr=_code_start;
	uint32_t val;

	while(!in_bin.eof()){
		val=0;
		in_bin.read(reinterpret_cast<char*>(&val),sizeof(val));
		printf("%x %x\n",addr,val);
		write_memory(addr,val);
		addr+=4;
	}	
	in_bin.close();
	return 0;
}

void excitation_signal(void){
	top->rst=0;
	top->eval();

	top->rst=1;
	top->eval();
	
	while (contextp->time()<100) {
		if (contextp->time() > 20)
			top->rst = 0;
		
		top->clk = !top->clk;
		top->eval();

		if (tfp){
			tfp->dump (contextp->time());
		}
		contextp->timeInc(1);
	}
}
