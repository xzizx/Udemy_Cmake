# 0.) Create Code & Cmake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake ../ #configure cmake
# 4.) cmake --build ./
# 5.) Executable.exe
# 6.) External : git submodule add https://github.com/nlohmann/json ./external/json

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplete VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_VERBOSE_MAKEFILE     true)

set(LIBRARY_NAME        Library)
set(EXECUTABLE_NAME hello_world)

set(LIBRARY_HEADERS   "src/header")
set(LIBRARY_SOURCES   "src/core/my_lib.cc")
set(EXE_SOURCES       "exe/main.cc")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
add_git_submodule(external/json)

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES})

target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_HEADERS})

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})

target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME} nlohmann_json)

