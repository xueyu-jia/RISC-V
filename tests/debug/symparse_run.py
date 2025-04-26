import subprocess
import sys
import argparse

def find_symbol_address(elf_file_path, target_symbol_name):
    """
    执行 readelf -s 命令，查找特定符号的地址。

    Args:
        elf_file_path (str): ELF 文件的路径。
        target_symbol_name (str): 要查找的符号名称。

    Returns:
        str or None: 如果找到符号，返回其地址（字符串形式）；否则返回 None。
    """
    command = ['readelf', '-s', elf_file_path]

    try:
        # 使用 subprocess.run() 执行命令
        # capture_output=True 捕获标准输出和标准错误
        # text=True (或 encoding='utf-8') 将输出解码为文本
        # check=True 如果命令返回非零退出码，则抛出 CalledProcessError
        result = subprocess.run(
            command,
            capture_output=True,
            text=True,
            check=True
        )

        # 获取标准输出
        readelf_output = result.stdout

        # --- 在 Python 中分析输出 ---
        # 按行分割输出
        lines = readelf_output.splitlines()

        # 遍历每一行查找目标符号
        for line in lines:
            # readelf -s 的输出是按列组织的，使用 split() 按空格分割
            # 连续的空格会被 split() 视为一个分隔符
            parts = line.split()

            # 检查行是否有足够的列（至少包含地址和名称）
            # 并检查最后一列（通常是符号名称）是否是我们想要的符号
            # 注意：readelf 的输出格式可能略有差异，这里假设地址在第2列，名称在最后一列
            if len(parts) >= 8 and parts[-1] == target_symbol_name:
                # 地址通常在第2列（索引为1）
                symbol_address = parts[1]
                # print(f"Found symbol '{target_symbol_name}' at address: {symbol_address}")
                return symbol_address

        # 如果循环结束仍未找到
        print(f"Symbol '{target_symbol_name}' not found in '{elf_file_path}' symbol table.", file=sys.stderr)
        return None

    except FileNotFoundError:
        print(f"Error: 'readelf' command not found. Make sure it's in your PATH.", file=sys.stderr)
        return None
    except subprocess.CalledProcessError as e:
        print(f"Error executing command: {' '.join(e.cmd)}", file=sys.stderr)
        print(f"Return code: {e.returncode}", file=sys.stderr)
        print(f"Stderr:\n{e.stderr}", file=sys.stderr)
        return None
    except Exception as e:
        print(f"An unexpected error occurred: {e}", file=sys.stderr)
        return None

#对关键符号进行地址解析，并运行仿真程序
def symaddr_parse(elf):
    sym_addr={}
    sym_addr['tohost'] = find_symbol_address(elf,'tohost')         
    sym_addr["begin_signature"] = find_symbol_address(elf,'begin_signature')
    sym_addr["end_signature"] = find_symbol_address(elf,'end_signature')

    return sym_addr

#参数解析
def args_parse():
    parser = argparse.ArgumentParser(description='对可执行文件进行符号解析并运行仿真')
    parser.add_argument(
        '--dut_exe',
        help='待测试模型路径' # 会显示在帮助信息中
    )
    parser.add_argument(
        '--elf',
        help='待测试模型需加载的可执行文件路径' # 会显示在帮助信息中
    )
    parser.add_argument(
        '--signature',
        help='签名文件存储路径' # 会显示在帮助信息中
    )

    parser.add_argument(
        '--xlen',
        help='编译工具链的机器字长'
    )
    parser.add_argument(
        '--vcd',
        help='指定生成波形图的路径，默认为空（不生成波形图）',
        default=''
    )
    args = parser.parse_args()
    return args


args=args_parse()
dut_exe,xlen,elf,signature,vcd=args.dut_exe,args.xlen,args.elf,args.signature,args.vcd


codebin=elf[:-4]+'.code.bin'
databin=elf[:-4]+'.data.bin'
objcpy='riscv{0}-unknown-elf-objcopy'.format(xlen)

elf2codebin_cmd=[
    objcpy,
    '-O',
    'binary',
    '--only-section',
    '.text.init',
    '--only-section',
    '.text',
    elf,
    codebin
]
subprocess.run(elf2codebin_cmd)

elf2databin_cmd=[
    objcpy,
    '-O',
    'binary',
    '--only-section',
    '.tohost',
    '--only-section',
    '.data',
    '--only-section',
    '.data.string',
    elf,
    databin
]
subprocess.run(elf2databin_cmd)


sym_addr=symaddr_parse(elf)

sym_tohost_arg='+sym_tohost_addr={0}'.format(sym_addr["tohost"])
sym_begin_signature_arg='+sym_begin_signature_addr={0}'.format(sym_addr["begin_signature"])
sym_end_signature_arg='+sym_end_signature_addr={0}'.format(sym_addr["end_signature"])
loadcode_arg='+loadcode={0}'.format(codebin)
loaddata_arg='+loaddata={0}'.format(databin)

signature_arg='+signature={0}'.format(signature)
vcd_arg=""
if(vcd!=""):
    vcd_arg='+vcd={0}'.format(vcd)

# 运行测试模型执行特定的可执行文件
run_cmd = [
    dut_exe,
    loadcode_arg,
    loaddata_arg,
    vcd_arg,
    signature_arg,
    sym_tohost_arg,
    sym_begin_signature_arg,
    sym_end_signature_arg
]

subprocess.run(run_cmd)
