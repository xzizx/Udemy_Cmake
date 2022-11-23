# 0.) Create Code & Cmake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake ../ #configure cmake
# 4.) cmake --build ./
# 5.) Executable.exe
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplete VERSION 1.0.0 LANGUAGES C CXX)

add_library(Library STATIC my_lib.cc)

add_executable(Executable main.cc )

target_link_libraries(Executable PUBLIC Library)
