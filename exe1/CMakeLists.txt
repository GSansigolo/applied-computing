
cmake_minimum_required(VERSION 3.5)

project(exe1)

set(CMAKE_CXX_STANDARD_REQUIRED 11)

file(GLOB SRC_FILES ./*.cpp)
file(GLOB HDR_FILES ./*.hpp)

add_executable(stack ${SRC_FILES} ${HDR_FILES})


