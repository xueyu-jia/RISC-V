//该文件定义verilator的仿真激励
#include "VSoc.h"
#include "verilated_vcd_c.h"
#include "VSoc___024root.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cerrno>
#include <vector>
#include <cstdint> // For uint8_t, uint32_t
#include <cstdio>  // For SEEK_END, SEEK_SET

#define NOT_EXIST_SYM_TOHOST 1
#define NOT_EXIST_SYM_BEGIN_SIGNATURE 2
#define NOT_EXIST_SYM_END_SIGNATURE 3
#define FAIL_LOAD_CODE 4
#define FAIL_LOAD_DATA 5
#define FAIL_INIT 6


#define WORDLEN 4
#define WORDLEN_SHIFT 2
//以字节为单位的内存大小
#define DATAMEM_SIZE 0x00400000
//以字为单位的内存大小
#define DATAMEM_COUNT (DATAMEM_SIZE>>WORDLEN_SHIFT)

#define CODEMEM_SIZE 0x00400000
#define CODEMEM_COUNT (DATAMEM_SIZE>>WORDLEN_SHIFT)
const char* arg_vcd="vcd=";
const char* arg_signature="signature=";
const char* arg_loadcode="loadcode=";
const char* arg_loaddata="loaddata=";
const uint32_t CODE_OFFSET=0x80000000;
const uint32_t DATA_OFFSET=0x80400000;


int init(int argc, char **argv);
const char* arg_parse(const char* arg);
VerilatedVcdC* generator_vcd();
void generator_signature(uint32_t _sigmem_start,uint32_t sigmem_end);
int load_bin();
void excitation_signal(uint32_t _sym_tohost_addr);
bool load_binary_into_memory(const char* filename,
                             uint8_t* memory_ptr, // 假设内存是 uint8_t 类型的数组
                             size_t memory_byte_count,
                             size_t load_base_address);

VerilatedContext* contextp;
VSoc* top;
VerilatedVcdC* tfp;
uint8_t* datamem;
uint8_t* codemem;


const char* arg_sym_tohost_addr="sym_tohost_addr=";
const char* arg_sym_begin_signature_addr="sym_begin_signature_addr=";
const char* arg_sym_end_signature_addr="sym_end_signature_addr=";
uint32_t sym_tohost_addr,sym_begin_signature_addr,sym_end_signature_addr;

int loc_argc;
char** loc_argv;

int main(int argc, char **argv, char **env)
{
	int err;
	printf("Built with %s %s.\n", Verilated::productName(), Verilated::productVersion());

    err=init(argc,argv);	
	if(err==FAIL_INIT) return 0;
		
	//generator an excitation signal
	excitation_signal(sym_tohost_addr);
	
	//generator signature
	generator_signature(sym_begin_signature_addr,sym_end_signature_addr);
	
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
	
	loc_argc=argc;
	loc_argv=argv;

	//创建顶层模块
	top=new VSoc; 
	datamem=&(top->rootp->Soc__DOT__Rv32_datamem__DOT__mem[0]);
    codemem=&(top->rootp->Soc__DOT__Rv32_codemem__DOT__mem[0]);
	// 参数分析，决定是否开始波形追踪并加载可执行文件
	// Tracing (vcd)
	tfp = generator_vcd();
	
	//load bin 
	if(load_bin()){
		printf("初始化失败\n");
		return FAIL_INIT;
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
	for(int i=1;i<loc_argc;i++)
		if(arg_check(loc_argv[i],prefix_arg))	{
			return loc_argv[i]+strlen(prefix_arg)+1;
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
    if(addr<DATA_OFFSET) 
		val=(codemem[(addr-CODE_OFFSET)])|(codemem[(addr-CODE_OFFSET)+1]<<8)|(codemem[(addr-CODE_OFFSET)+2]<<16)|(codemem[(addr-CODE_OFFSET)+3]<<24);
    else val=(datamem[(addr-DATA_OFFSET)])|(datamem[(addr-DATA_OFFSET)+1]<<8)|(datamem[(addr-DATA_OFFSET)+2]<<16)|(datamem[(addr-DATA_OFFSET)+3]<<24);

	return val;
}

void generator_signature(uint32_t _sigmem_start,uint32_t _sigmem_end){
	// generate signature
	const char* signature_path = arg_parse(arg_signature);
	if (!signature_path) return ;

	std::ofstream signature_file(signature_path);
	for(uint32_t addr=_sigmem_start;addr<_sigmem_end;addr+=4){
		uint32_t value = read_memory(addr);
		signature_file<<std::hex<<std::setw(8)<<std::setfill('0')<<value<<"\n";
	}

	return ;	
}

static inline void write_memory(uint32_t addr,uint32_t val){
    if(addr<DATA_OFFSET){
		codemem[(addr-CODE_OFFSET)]=(val)&0xFF;
		codemem[(addr-CODE_OFFSET)+1]=(val>>8)&0xFF;
		codemem[(addr-CODE_OFFSET)+2]=(val>>16)&0xFF;
		codemem[(addr-CODE_OFFSET)+3]=(val>>24)&0xFF;
	}
	else {
		datamem[(addr-DATA_OFFSET)]=(val)&0xFF;
		datamem[(addr-DATA_OFFSET)+1]=(val>>8)&0xFF;
		datamem[(addr-DATA_OFFSET)+2]=(val>>16)&0xFF;
		datamem[(addr-DATA_OFFSET)+3]=(val>>24)&0xFF;
	}
}

uint32_t str2int(const char* str){
	int pos=0;
	uint32_t res=0; 
	while(str[pos]){ 
		if(str[pos]>='0' && str[pos]<='9')
			res=res*16+(str[pos]-'0');
		else if(str[pos]>='a' && str[pos]<='f')
			res=res*16+(str[pos]-'a'+10);
		else res=res*16+(str[pos]-'A'+10);
		pos++;
	}
	return res;
}

int sym_parse(void){
	const char* _sym_tohost_addr=arg_parse(arg_sym_tohost_addr);
	if(!_sym_tohost_addr) {
		printf("请传入符号tohost地址\n");
		return NOT_EXIST_SYM_TOHOST;
	} 	

	const char* _sym_begin_signature_addr=arg_parse(arg_sym_begin_signature_addr);
		if(!_sym_begin_signature_addr) {
		printf("请传入符号begin_signature地址\n");
		return NOT_EXIST_SYM_BEGIN_SIGNATURE;
	} 	

	
	const char* _sym_end_signature_addr=arg_parse(arg_sym_end_signature_addr);
	if(!_sym_end_signature_addr) {
		printf("请传入符号end_signature地址\n");
		return NOT_EXIST_SYM_END_SIGNATURE;
	} 	

	sym_tohost_addr=str2int(_sym_tohost_addr);
	sym_begin_signature_addr=str2int(_sym_begin_signature_addr);
	sym_end_signature_addr=str2int(_sym_end_signature_addr);
	printf("%x %x %x\n",sym_tohost_addr,sym_begin_signature_addr,sym_end_signature_addr);
	return 0;
}

//加载bin文件并解析关键符号地址
#define XLEN 32
int load_bin(){
	int err=0;
	if(err=sym_parse()) return err;

	const char* loadcode_path= arg_parse(arg_loadcode);
	if(!load_binary_into_memory(loadcode_path,codemem,CODEMEM_SIZE,0)) return FAIL_LOAD_CODE;
	const char* loaddata_path= arg_parse(arg_loaddata);
    if(!load_binary_into_memory(loaddata_path,datamem,DATAMEM_SIZE,0)) return FAIL_LOAD_DATA;

    uint32_t val;
	for(uint32_t addr=CODE_OFFSET;addr<=CODE_OFFSET+0x100;addr+=4){
		val=read_memory(addr);
		printf("%08x:%08x\n",addr,val);
	}

	write_memory(sym_tohost_addr,0);

	return 0;
}

void excitation_signal(uint32_t _sym_tohost_addr){
	top->rst=1;
	top->eval();

	top->rst=0;
	top->eval();

	int res=0;
	while (!(res=read_memory(_sym_tohost_addr))) {
		if (contextp->time() > 20)
			top->rst = 1;
		
		top->clk = !top->clk;
		top->eval();

		if (tfp){
			tfp->dump (contextp->time());
		}
		contextp->timeInc(1);
	}
	printf("%d\n",res);
}


/**
 * @brief 将一个二进制文件加载到模拟内存中。
 *
 * @param filename 要加载的二进制文件的路径。
 * @param memory_ptr 指向模拟内存 C++ 数组的指针。
 * @param memory_byte_count 模拟内存的总容量，以“字节”（word）为单位。
 * @param load_base_address 二进制数据在模拟内存中开始加载的地址（以“字节”为单位）。
 * @return true 加载成功。
 * @return false 加载失败（文件找不到、读取错误、内存溢出）。
 */
bool load_binary_into_memory(const char* filename,
                             uint8_t* memory_ptr, // 假设内存是 uint8_t 类型的数组
                             size_t memory_byte_count,
                             size_t load_base_address) {

    std::ifstream infile(filename, std::ios::binary | std::ios::in);

    if (!infile.is_open()) {
        std::cerr << "Error: Could not open binary file '" << filename << "'" << std::endl;
        return false;
    }

    // 获取文件大小
    infile.seekg(0, std::ios::end);
    size_t file_size_bytes = infile.tellg();
    infile.seekg(0, std::ios::beg);

    if (file_size_bytes == 0) {
        std::cerr << "Warning: Binary file '" << filename << "' is empty." << std::endl;
        infile.close();
        return true; // 空文件也算加载成功，但无内容
    }


    // 检查是否会超出模拟内存范围
    if (load_base_address + file_size_bytes > memory_byte_count) {
        std::cerr << "Error: Binary file size (" << file_size_bytes << " bytes)"
                  << " exceeds available memory space starting at address " << load_base_address << "."
                  << " Memory size is " << memory_byte_count << " byte." << std::endl;
        infile.close();
        return false;
    }

    // 读取文件内容到缓冲区
    std::vector<char> buffer(file_size_bytes);
    infile.read(buffer.data(), file_size_bytes);

    if (!infile) {
        std::cerr << "Error: Could not read binary file '" << filename << "'" << std::endl;
        infile.close();
        return false;
    }

    infile.close();

    // 将缓冲区内容按字节拷贝到模拟内存
    // 假设二进制文件是小端序 (Little-Endian)，RISC-V 标准 bin 文件通常是小端序
    for (size_t index = 0; index < file_size_bytes; index += 1) {
        uint8_t val = 0;
		val = static_cast<uint8_t>(buffer[index]);

        if (index < memory_byte_count) { // 再次检查，确保不会意外写越界
             memory_ptr[index] = val;
        } else {
            std::cerr << "Internal Error: Calculated memory index " << index
                      << " is out of bounds during loading. This should not happen." << std::endl;
            return false; // 内部逻辑错误
        }
    }

    std::cout << "Successfully loaded binary file '" << filename << "' ("
              << file_size_bytes << " bytes) into memory starting at address "
              << load_base_address << "." << std::endl;

    return true;
}
