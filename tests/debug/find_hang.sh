find . -maxdepth 10 -type d ! -name '.' -print0 | while IFS= read -r -d '' dir; do
    # 检查当前子目录 ($dir) 中是否存在 *.elf 文件
    has_elf=$(find "$dir" -maxdepth 1 -name "*.elf" -print -quit)

    # 检查当前子目录 ($dir) 中是否存在 *.signature 文件
    has_signature=$(find "$dir" -maxdepth 1 -name "*.signature" -print -quit)

    # 如果存在 *.elf 但不存在 *.signature，则打印该子目录名
    if [ -n "$has_elf" ] && [ -z "$has_signature" ]; then
        echo "$dir"
    fi
done

