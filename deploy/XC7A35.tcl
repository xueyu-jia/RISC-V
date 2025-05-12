#-------------------------------------------------------------------------------
# Vivado TCL 脚本示例 - 基本设计流程
#-------------------------------------------------------------------------------
# 项目创建、添加文件、综合、实现和生成比特流。
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# 1. 设置变量
#    定义项目名称、目录、FPGA 器件型号、顶层模块名称以及源文件和约束文件的路径。
#-------------------------------------------------------------------------------
set project_name "RISCV_FPGA"
set project_dir "../../$project_name"
set part "xc7a35tcsg324-3" 
set top_module "Soc"

# 当前源文件集
set target_fileset [current_fileset]

# 头文件列表
set include_dirs [list \
	"../src" \
	"../src/Mem" \
	"../src/Device" \
	"../src/Rv32" \
]
# HDL 源文件列表
set hdl_files [list "../src/"]
# 约束文件列表 (XDC 文件)
set xdc_files [list "../src/ego1.xdc"]

# 清理旧的项目目录（可选，谨慎使用）
#if {[file exists $project_dir]} {
#  puts "INFO: Removing existing project directory: $project_dir"
#  file delete -force $project_dir
#}

#-------------------------------------------------------------------------------
# 2. 创建或打开项目
#    如果项目不存在则创建新项目，如果存在则打开。
#    使用 -force 选项会覆盖同名项目（谨慎使用）。
#-------------------------------------------------------------------------------
if {[file exists "$project_dir/$project_name.xpr"]} {
  puts "INFO: Opening existing project: $project_dir/$project_name.xpr"
  open_project "$project_dir/$project_name.xpr"
} else {
  puts "INFO: Creating new project: $project_name at $project_dir"
  create_project $project_name $project_dir -part $part
}


puts "INFO: Setting top module to: $top_module"
set_property TOP $top_module $target_fileset

#-------------------------------------------------------------------------------
# 3. 添加源文件到项目
#    将 HDL 源文件和约束文件添加到相应的 FileSet 中。
#    'sources_1' 是默认的 HDL 源文件集。
#    'constrs_1' 是默认的约束文件集。
#-------------------------------------------------------------------------------
puts "INFO: Adding HDL source files..."
add_files $hdl_files 

puts "INFO: Adding XDC constraint files..."
add_files -fileset constrs_1 -norecurse $xdc_files

#-------------------------------------------------------------------------------
# 4. 运行综合 (Synthesis)
#    执行设计综合，将 HDL 代码转换为门级网表。
#-------------------------------------------------------------------------------
puts "INFO: Running synthesis..."
synth_design -top $top_module -part $part -include_dirs $include_dirs

# 检查综合是否成功
if {[get_runs synth_1 -quiet] eq ""} {
  puts "ERROR: Synthesis failed or run not created."
  exit 1
}
launch_runs synth_1
wait_on_run synth_1

if {[get_property PROGRESS [get_runs synth_1]] ne "100%"} {
  puts "ERROR: Synthesis run did not complete successfully."
  exit 1
}

#-------------------------------------------------------------------------------
# 5. 运行实现 (Implementation)
#    执行设计实现，包括优化、布局和布线。
#-------------------------------------------------------------------------------
puts "INFO: Running implementation..."
# 可以为实现过程设置属性，例如策略
# set_property strategy Performance_Retiming [get_runs impl_1] ;# 示例：设置实现策略

# 检查实现 run 是否存在，如果不存在则创建
if {[get_runs impl_1 -quiet] eq ""} {
    puts "INFO: Implementation run does not exist, creating it."
    # 如果 synth_1 运行成功，基于它创建 impl_1
    if {[get_runs synth_1] ne ""} {
        # 确保 synth_1 运行已完成并且结果可用
        if {[get_property STATUS [get_runs synth_1]] eq "synth_design Complete"} {
             create_run impl_1 -parent_run synth_1 -flows {Vivado Implementation 2024} # 根据您的Vivado版本调整flow
        } else {
             puts "ERROR: Synthesis run not complete, cannot create implementation run."
             exit 1
        }
    } else {
        puts "ERROR: Synthesis run does not exist, cannot create implementation run."
        exit 1
    }
}


launch_runs impl_1 -to_step write_bitstream
wait_on_run impl_1

if {[get_property PROGRESS [get_runs impl_1]] ne "100%"} {
  puts "ERROR: Implementation run did not complete successfully."
  exit 1
}

#-------------------------------------------------------------------------------
# 6. 生成比特流 (Generate Bitstream)
#    生成用于配置 FPGA 的比特流文件。
#-------------------------------------------------------------------------------
puts "INFO: Generating bitstream..."
# write_bitstream -force "${project_name}.bit" ;# 如果在上一步没有生成，可以在这里单独生成

# 检查比特流文件是否生成成功
set bitstream_path "$project_dir/$project_name.runs/impl_1/${top_module}.bit"
if {[file exists $bitstream_path]} {
  puts "INFO: Bitstream generated successfully: $bitstream_path"
} else {
  puts "ERROR: Bitstream generation failed."
  exit 1
}

#-------------------------------------------------------------------------------
# 8. 生成报告 (Optional)
#    生成一些常用的报告。
#-------------------------------------------------------------------------------
puts "INFO: Generating reports..."
report_timing_summary -file "$project_dir/reports/timing_summary.rpt"
report_utilization -file "$project_dir/reports/utilization.rpt"
report_power -file "$project_dir/reports/power.rpt"

#-------------------------------------------------------------------------------
# 9. 保存和关闭项目
#-------------------------------------------------------------------------------
puts "INFO: Saving and closing project..."
save_project
close_project

puts "INFO: Vivado design flow completed."

#-------------------------------------------------------------------------------
# 脚本结束
#-------------------------------------------------------------------------------
