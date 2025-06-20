#!/usr/bin/env bash

# --- 配置 ---
# 脚本出错时立即退出
set -e

# 定义要求的版本号
REQUIRED_PYTHON_VERSION="3.12"
REQUIRED_RISCOF_VERSION="1.25.3"

# --- 界面 ---
# 定义颜色 (让输出更好看)
C_RED='\033[0;31m'
C_GREEN='\033[0;32m'
C_YELLOW='\033[0;33m'
C_BLUE='\033[0;34m'
C_NC='\033[0m' # No Color

# --- 辅助函数 ---
# 比较版本号 (A >= B ?)
# 用法: version_ge "版本A" "版本B"
function version_ge() {
    if [[ "$(printf '%s\n' "$2" "$1" | sort -V | head -n1)" == "$2" ]]; then
        return 0 # True: A >= B
    else
        return 1 # False: A < B
    fi
}

# --- 主逻辑 ---
echo -e "${C_BLUE}=========================================${C_NC}"
echo -e "${C_BLUE}      RISC-V 项目环境检查脚本          ${C_NC}"
echo -e "${C_BLUE}=========================================${C_NC}"

#
# 步骤 1: 检查 Python 版本
#
echo -ne "${C_YELLOW}1. 检查 Python 版本 (>=${REQUIRED_PYTHON_VERSION})...${C_NC}"
if ! command -v python3 &> /dev/null; then
    echo -e " ${C_RED}失败${C_NC}"
    echo "   错误: 系统中未找到 'python3' 命令。"
    echo "   请安装 Python ${REQUIRED_PYTHON_VERSION} 或更高版本。"
    exit 1
fi
PYTHON_VERSION=$(python3 --version | awk '{print $2}')
if version_ge "$PYTHON_VERSION" "$REQUIRED_PYTHON_VERSION"; then
    echo -e " ${C_GREEN}通过 (版本: ${PYTHON_VERSION})${C_NC}"
else
    echo -e " ${C_RED}失败${C_NC}"
    echo "   错误: Python 版本不满足要求。"
    echo "   - 当前版本: ${PYTHON_VERSION}"
    echo "   - 要求版本: >= ${REQUIRED_PYTHON_VERSION}"
    exit 1
fi

#
# 步骤 2: 检查 RISC-V 32位工具链
#
echo -ne "${C_YELLOW}2. 检查 RISC-V 32位 GCC 工具链...${C_NC}"
# 我们通过检查其C编译器是否存在来判断整个工具链是否存在
if command -v riscv32-unknown-elf-gcc &> /dev/null;then
    echo -e " ${C_GREEN}通过 (已安装)${C_NC}"
else
    echo -e "   ${C_RED}❌ 失败！工具链不完整或未安装。${C_NC}"
    echo "   即将开始从源码自动编译安装 RISC-V 32位 GCC 工具链。"
    echo -e "   ${C_YELLOW}警告: 这个过程会消耗大量时间(可能长达1小时)和磁盘空间(>10GB)，并会使用 sudo 安装多个系统依赖包。${C_NC}"
    read -p "   是否继续? (y/N) " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        echo "   安装已取消。"
        exit 1
    fi

    # 检查并安装依赖 (Debian-based systems)
    if command -v apt-get &> /dev/null; then
        echo "   -> 正在使用 apt 安装编译所需的依赖包..."
        sudo apt-get update > /dev/null
        sudo apt-get install -y autoconf automake autotools-dev curl python3 libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev git
    else
        echo -e "   ${C_YELLOW}警告: 自动依赖安装仅支持 Debian/Ubuntu。请确保已手动安装所有必需的编译依赖。${C_NC}"
        sleep 3
    fi

    INSTALL_PATH="/opt/riscv32"
    echo "   -> 工具链将被安装到: ${INSTALL_PATH}"
    sudo mkdir -p "$INSTALL_PATH"

    TMP_DIR=$(mktemp -d)
    echo "   -> 将在临时目录 ${TMP_DIR} 中进行编译"
    trap 'echo "正在清理临时文件..."; rm -rf "$TMP_DIR"' EXIT
    cd "$TMP_DIR"

    echo "   -> 正在克隆 riscv-gnu-toolchain 仓库 (包含子模块，请耐心等待)..."
    git clone --recursive https://github.com/riscv-collab/riscv-gnu-toolchain.git
    cd riscv-gnu-toolchain

    echo "   -> 正在配置构建环境 (arch=rv32g, abi=ilp32d)..."
    ./configure --prefix="$INSTALL_PATH" --with-arch=rv32g --with-abi=ilp32d

    echo "   -> 正在编译工具链 (此过程将持续非常长的时间, 是时候去泡杯咖啡了 ☕)..."
    make -j$(nproc)

    echo "   -> 正在使用 sudo 权限安装工具链..."
    sudo make install
    
    # 清理工作由trap命令接管
    trap - EXIT
    rm -rf "$TMP_DIR"

    echo -e "   ${C_GREEN}✅ RISC-V 32位工具链安装成功！${C_NC}"
    echo -e "   ${C_YELLOW}!!!!!!!!!!!!!!!!!!!!!!!!!! 重要操作 !!!!!!!!!!!!!!!!!!!!!!!!!!${C_NC}"
    echo -e "   ${C_YELLOW}为了让系统找到刚安装的工具链，请将下面这行命令添加到您的shell配置文件中:${C_NC}"
    echo -e "   ${C_YELLOW}(例如 ~/.bashrc, ~/.zshrc, 或 /etc/profile.d/riscv.sh)${C_NC}"
    echo ""
    echo -e "   export PATH=\"${INSTALL_PATH}/bin:\$PATH\""
    echo ""
    echo "   ${C_YELLOW}添加后，请运行 'source <您的配置文件>' 或新开一个终端来使改动生效。${C_NC}"
    echo -e "   ${C_YELLOW}!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!${C_NC}"
fi

#
# 步骤 3: 检查 Spike 是否安装
#
echo -ne "${C_YELLOW}3. 检查 Spike 模拟器...${C_NC}"
if command -v spike &> /dev/null; then
    echo -e " ${C_GREEN}通过 (已安装)${C_NC}"
else
    echo -e " ${C_RED}失败 (未安装)${C_NC}"
    echo "   Spike 模拟器未找到。即将开始自动编译安装..."
    echo -e "   ${C_YELLOW}警告: 此过程耗时较长，且需要 sudo 权限安装依赖和程序。${C_NC}"
    sleep 3

    # 检查核心构建工具 git 和 g++
    if ! command -v git &> /dev/null || ! command -v g++ &> /dev/null; then
        echo -e "   ${C_RED}错误: 缺少核心构建工具 (git/g++)。请先安装它们 (sudo apt install git build-essential)${C_NC}"
        exit 1
    fi

    # 检查并安装依赖 (仅限Debian/Ubuntu)
    if command -v apt-get &> /dev/null; then
        echo "   -> 正在使用 apt 安装依赖: device-tree-compiler..."
        sudo apt-get update > /dev/null
        sudo apt-get install -y device-tree-compiler
    else
        echo -e "   ${C_YELLOW}警告: 未检测到 apt-get。请确保您已手动安装 'device-tree-compiler'。${C_NC}"
    fi
    
    # 创建临时目录进行编译
    TMP_DIR=$(mktemp -d)
    echo "   -> 将在临时目录 ${TMP_DIR} 中进行编译"
    # 使用trap命令确保即使脚本出错退出，临时目录也会被删除
    trap 'rm -rf "$TMP_DIR"' EXIT
    cd "$TMP_DIR"

    echo "   -> 正在克隆 riscv-isa-sim 仓库..."
    git clone https://github.com/riscv-software-src/riscv-isa-sim.git
    cd riscv-isa-sim

    echo "   -> 正在配置构建环境 (安装到 /usr/local)..."
    mkdir build
    cd build
    ../configure --prefix=/usr/local

    echo "   -> 正在编译 Spike (这可能需要很长时间)..."
    make -j$(nproc)

    echo "   -> 正在使用 sudo权限 安装 Spike..."
    sudo make install

    # 清理工作已由trap命令接管
    echo -e "   ${C_GREEN}✅ Spike 安装成功！${C_NC}"
fi

#
# 步骤 4: 检查 Verilator 是否安装
#
echo -ne "${C_YELLOW}4. 检查 Verilator...${C_NC}"
if command -v verilator &> /dev/null; then
    echo -e " ${C_GREEN}通过 (已安装)${C_NC}"
else
    # Verilator 未安装，执行安装
    echo -e " ${C_RED}失败 (未安装)${C_NC}"
    echo "   Spike 模拟器未找到。即将开始自动编译安装..."
    echo -e "   ${C_YELLOW}警告: 此过程耗时较长，且需要 sudo 权限安装依赖和程序。${C_NC}"
    sleep 3

    if sudo apt-get update && sudo apt-get install -y verilator; then
        echo -e "   ${C_GREEN}✅ riscof==${REQUIRED_RISCOF_VERSION} 安装成功。${C_NC}"
    else
        echo -e "   ${C_RED}❌  Verilator安装失败。请检查 apt 和网络环境或尝试手动安装${C_NC}"
        exit 1
    fi
fi

#
# 步骤 5: 检查 riscof 版本
#
echo -ne "${C_YELLOW}5. 检查 riscof 版本 (==${REQUIRED_RISCOF_VERSION})...${C_NC}"
if pip3 show riscof &> /dev/null; then
    # riscof 已安装，检查版本是否正确
    CURRENT_RISCOF_VERSION=$(pip3 show riscof | grep "^Version:" | awk '{print $2}')
    if [[ "$CURRENT_RISCOF_VERSION" == "$REQUIRED_RISCOF_VERSION" ]]; then
        echo -e " ${C_GREEN}通过 (版本: ${CURRENT_RISCOF_VERSION})${C_NC}"
    else
        echo -e " ${C_RED}失败 (版本错误)${C_NC}"
        echo "   错误: riscof 版本不正确。"
        echo "   - 当前版本: ${CURRENT_RISCOF_VERSION}"
        echo "   - 要求版本: == ${REQUIRED_RISCOF_VERSION}"
        echo "   请先卸载 (pip3 uninstall riscof)，然后重新运行此脚本。"
        exit 1
    fi
else
    # riscof 未安装，执行安装
    echo -e " ${C_YELLOW}未安装，正在安装...${C_NC}"
    if pip3 install "riscof==$REQUIRED_RISCOF_VERSION"; then
        echo -e "   ${C_GREEN}✅ riscof==${REQUIRED_RISCOF_VERSION} 安装成功。${C_NC}"
    else
        echo -e "   ${C_RED}❌ riscof 安装失败。请检查 pip3 和网络环境。${C_NC}"
        exit 1
    fi
fi

# --- 总结 ---
echo "-----------------------------------------"
echo -e "${C_GREEN}🎉 恭喜！所有环境检查通过，项目依赖已全部满足。${C_NC}"


#---克隆测试样例到工作目录
echo "-----------------------------------------"
echo -e "${C_YELLOW}克隆测试例程至工作目录...${C_NC}"
if riscof arch-test --clone --dir ./tests/riscv-arch-test;then
    echo -e "${C_GREEN}🎉 恭喜！测试样例克隆成功${C_NC}"
else 
    echo -e "${C_RED}❌ 测试样例克隆失败。请检查riscof和网络环境。${C_NC}"
    exit 1
fi

exit 0
