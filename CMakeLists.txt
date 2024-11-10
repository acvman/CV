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

# 查找OpenCV库
find_package(OpenCV)
# 添加库文件
add_library(add_lib SHARED src/add.cpp)
message(STATUS add_lib)

# 指定可执行文件
add_executable(MyApp src/main.cpp)

# 链接库
target_link_libraries(MyApp PRIVATE add_lib ${OpenCV_LIBS})
# 链接 OpenCV 库
#target_link_libraries(MyApp )


# 包含 OpenCV 的头文件路径
#include_directories()
# 指定头文件路径
target_include_directories(MyApp PRIVATE include  ${OpenCV_INCLUDE_DIRS})
target_include_directories(add_lib PRIVATE include)


