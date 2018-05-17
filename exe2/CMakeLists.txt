
cmake_minimum_required(VERSION 3.5)

project(exe2)

file(GLOB SRC_FILES ./*.cpp)
file(GLOB HDR_FILES ./*.hpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(stack ${SRC_FILES} ${HDR_FILES})


