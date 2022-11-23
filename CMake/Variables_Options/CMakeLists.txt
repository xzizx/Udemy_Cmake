# 0.) Create Code & Cmake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake ../ #configure cmake
# 4.) cmake --build ./
# 5.) Executable.exe
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplete VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME ahsim)

option(COMPILE_EXCUTABLE "Whether to compile the executable" ON)

add_library(${LIBRARY_NAME} STATIC src/mylib/my_lib.cc)

target_include_directories(${LIBRARY_NAME} PUBLIC "./src/mylib")

add_executable(${EXECUTABLE_NAME} app/main.cc )

if(COMPILE_EXCUTABLE)
    target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})
else()
    message("+++++++++++")
endif()

