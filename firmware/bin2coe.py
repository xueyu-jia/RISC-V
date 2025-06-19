import argparse
import os

def bin_to_coe(input_file,bytes_per_word):
    """
    将一个二进制文件 (.bin) 转换为 Xilinx COE 文件 (.coe)。

    Args:
        input_file (str): 输入二进制文件的路径 (.bin)。
    """
    if not os.path.exists(input_file):
        print(f"错误：找不到输入文件 '{input_file}'。")
        return
    name, _ = os.path.splitext(input_file)

    hex_digits_per_word =  2 # 每个字节在16进制下有2位
    with open(input_file, 'rb') as f_bin:
        data = f_bin.read()
        file_size = len(data)
        if file_size % bytes_per_word != 0:
            print(f"错误：二进制文件大小 ({file_size} 字节) 不是指定字大小 ({bytes_per_word} 字节) 的整数倍。")
            return 
        num_words = file_size // bytes_per_word
        
    try:
        for i in range(bytes_per_word):
            output_file = name +f"{i}"+ ".coe"
            with open(output_file, 'w') as f_coe:
                # 写入 COE 文件头
                f_coe.write("Memory_Initialization_Radix = 16;\n") # 使用16进制表示数据
                f_coe.write("Memory_Initialization_Vector =\n")

                if file_size == 0:
                    print(f"警告：输入文件 '{input_file}' 为空。将生成一个空的 COE 文件。")
                    f_coe.write(";") # 空向量
                    print(f"成功生成空的 COE 文件 '{output_file}'。")
                    return

                for j in range(num_words):
                    pos = i + j * bytes_per_word
                    byte = data[pos:pos+1]
                    print(byte)

                    # 将字节转换为整数（小端序，即低位字节在前）
                    try:
                        word_value = int.from_bytes(byte, byteorder='little')
                    except ValueError:
                        print(f"错误：读取数据时发生问题，可能是文件已损坏或内容不足。")
                        return

                    # 格式化为指定位数的16进制字符串，不足前面补0
                    hex_string = f"{word_value:0{hex_digits_per_word}X}" # X 表示大写十六进制

                    f_coe.write(hex_string)

                    if j < num_words - 1:
                        f_coe.write(",\n") # 除最后一个外，数据后跟逗号和换行
                    else:
                        f_coe.write(";\n") # 最后一个数据后跟分号

            print(f"成功将文件 '{input_file}' 转换为 '{output_file}' ")

    except Exception as e:
        print(f"发生错误：{e}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="将一个二进制文件 (.bin) 转换为 Xilinx COE 文件 (.coe)。")
    parser.add_argument("input_file", help="输入二进制文件的路径 (.bin)")
    parser.add_argument("bytes_per_word", type=int, help="每个数据字的位宽，必须是 8 的倍数")

    args = parser.parse_args()

    # 执行转换函数
    bin_to_coe(args.input_file, args.bytes_per_word)