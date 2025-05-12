#!/bin/bash

# ---------------------------------------------------------------------------
# remap_hex_addresses_robust.sh - 重新映射 .hex 文件中的内存地址 (最终版 - strtonum)
#
# 作用:
#   该脚本读取一个 .hex 文件，找到所有以 '@' 开头的地址行，
#   将这些地址减去一个用户指定的十六进制偏移量，然后将结果
#   写入一个新的 .hex 文件。
#   此版本对地址提取更为健壮，可以处理 '@' 后面的可选空格，
#   并使用 strtonum() 函数明确进行十六进制到十进制的转换。
#
# 用法:
#   ./remap_hex_addresses_robust.sh <输入文件.hex> <输出文件.hex> <十六进制偏移量>
#
# 示例:
#   ./remap_hex_addresses_robust.sh input.hex output.hex 10
#   这会将 input.hex 中所有 `@` 后面的地址减去十六进制的 0x10。
#   例如：@00000010 会变为 @00000000
#
#   ./remap_hex_addresses_robust.sh input.hex output.hex 80000000
#   这会将 input.hex 中所有 `@` 后面的地址减去十六进制的 0x80000000。
#   例如：@80000000 会变为 @00000000
#
# 注意:
#   - 脚本假设地址是 8 位十六进制（32位地址），如果你的地址宽度不同，
#     请修改 awk 脚本中的 `sprintf("%08X", ...)` 部分。
#   - 减去偏移量后，地址不能为负数。如果结果为负，`sprintf` 会将其视为
#     一个大的无符号数，这可能不是你期望的。
# ---------------------------------------------------------------------------

# --- 参数解析与验证 ---

INPUT_FILE="$1"
OUTPUT_FILE="$2"
OFFSET_HEX="$3" # 用户输入的十六进制偏移量，例如 "10" 或 "80000000"

# 检查是否提供了所有参数
if [ -z "$INPUT_FILE" ] || [ -z "$OUTPUT_FILE" ] || [ -z "$OFFSET_HEX" ]; then
    echo "错误: 缺少参数。" > "/dev/stderr"
    echo "用法: $0 <输入文件.hex> <输出文件.hex> <十六进制偏移量>" > "/dev/stderr"
    echo "示例: $0 input.hex output.hex 10" > "/dev/stderr"
    echo "示例: $0 input.hex output.hex 80000000" > "/dev/stderr"
    exit 1
fi

# 验证输入文件是否存在
if [ ! -f "$INPUT_FILE" ]; then
    echo "错误: 输入文件 '$INPUT_FILE' 不存在。" > "/dev/stderr"
    exit 1
fi

# 验证偏移量是否为有效的十六进制数（简单检查）
if ! [[ "$OFFSET_HEX" =~ ^[0-9a-fA-F]+$ ]]; then
    echo "错误: 无效的十六进制偏移量 '$OFFSET_HEX'。请提供一个有效的十六进制数。" > "/dev/stderr"
    exit 1
fi

# --- 脚本执行信息 ---

echo "正在从 '$INPUT_FILE' 读取文件..."
echo "指定偏移量: 0x$OFFSET_HEX"
echo "结果将写入 '$OUTPUT_FILE'..."

# --- 核心逻辑 (使用 awk) ---

# 创建一个临时文件来存放 awk 脚本内容
AWK_SCRIPT_FILE=$(mktemp)

# 使用 here document (<< 'EOF_AWK_SCRIPT') 将 awk 脚本内容写入临时文件
# 注意：使用单引号包围 'EOF_AWK_SCRIPT' 可以防止 Shell 展开里面的变量
cat > "$AWK_SCRIPT_FILE" << 'EOF_AWK_SCRIPT'
# awk 脚本开始

# BEGIN 块在处理任何输入文件之前执行一次
BEGIN {
    # 将从 Shell 传入的十六进制偏移量字符串转换为十进制数
    # 使用 strtonum() 函数进行显式转换
    decimal_offset = strtonum("0x" offset_hex);
    # print "DEBUG: 内部十进制偏移量为: " decimal_offset > "/dev/stderr"; # 调试信息
}

# 规则：匹配以 "@" 开头的行
/^@/ {
    # 使用正则表达式提取 "@" 后面的十六进制数字串
    if (match($0, /^@[[:space:]]*([0-9a-fA-F]+)/, matches)) {
        old_hex_address_str = matches[1];
        
        # 将原始十六进制地址字符串转换为十进制数
        # 使用 strtonum() 函数进行显式转换
        decimal_old_address = strtonum("0x" old_hex_address_str);

        # 打印调试信息，检查地址提取是否正确
        # printf("DEBUG: 原始行: %s\n", $0) > "/dev/stderr";
        # printf("DEBUG: 提取到的十六进制字符串: '%s'\n", old_hex_address_str) > "/dev/stderr";
        # printf("DEBUG: 转换为十进制: %d (十六进制: %X)\n", decimal_old_address, decimal_old_address) > "/dev/stderr";
        
        # 执行地址减法操作
        decimal_new_address = decimal_old_address - decimal_offset;
        
        # 格式化新的十进制地址为 8 位（32位地址）零填充的十六进制字符串
        new_hex_address_str = sprintf("%08X", decimal_new_address);
        
        # 打印修改后的行到标准输出
        print "@" new_hex_address_str;
    } else {
        # 如果行以 "@" 开头但无法解析出有效的十六进制地址，则发出警告
        print "WARNING: 发现以 '@' 开头的行，但无法解析出有效的十六进制地址。该行将被原样输出: " $0 > "/dev/stderr";
        # 打印原始行，避免数据丢失
        print $0; 
    }
}

# 规则：匹配不以 "@" 开头的行（即数据行、注释行等）
!/^@/ {
    # 原样打印这些行到标准输出
    print $0;
}
# awk 脚本结束
EOF_AWK_SCRIPT

# 运行 awk 命令，通过 -f 选项指定从临时文件读取脚本
# -v offset_hex="$OFFSET_HEX" 仍然用于将 Shell 变量传递给 awk 脚本
awk -v offset_hex="$OFFSET_HEX" -f "$AWK_SCRIPT_FILE" "$INPUT_FILE" > "$OUTPUT_FILE"

# 删除临时文件
rm "$AWK_SCRIPT_FILE"

# --- 脚本完成信息 ---
echo "地址重映射完成。结果已保存到 '$OUTPUT_FILE'。"
echo "请检查输出文件 '$OUTPUT_FILE' 的内容以确保正确。"