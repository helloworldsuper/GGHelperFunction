# cmake 最低版本需求，不加入此行会受到警告信息
cmake_minimum_required(VERSION 3.10.0)
 
# 设置编译器选项以支持 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_FLAGS "-pthread")

# 项目名设置为 demo
project(demo)
 

# 将当前目录中的源文件名称赋值给变量 SRC_LIST
aux_source_directory(. SRC_LIST)
#aux_source_directory(common SRC_LIST)


# 指示变量 SRC_LIST 中的源文件需要编译成一个名称为 demo 的可执行文件
add_executable(demo ${SRC_LIST})

#wsl on windows
#cmake .
#make
#./demo
