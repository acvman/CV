#cmake_minimum_required(VERSION 3.28)
#project(untitled5)
#
#set(CMAKE_CXX_STANDARD 17)
#
#add_executable(untitled5 src/main.cpp
#        include/add.h
#        src/add.cpp)
# CMakeLists.txt
cmake_minimum_required(VERSION 3.16)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

# 添加库文件
add_library(add_lib SHARED src/add.cpp)

message(STATUS add_lib)

# 指定可执行文件
add_executable(MyApp src/main.cpp)

# 链接库
target_link_libraries(MyApp PRIVATE add_lib)

# 指定头文件路径
target_include_directories(MyApp PRIVATE include)
target_include_directories(add_lib PRIVATE include)
