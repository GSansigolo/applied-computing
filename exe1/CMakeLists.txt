
cmake_minimum_required(VERSION 3.5)

project(exe1)

file(GLOB SRC_FILES ./*.cpp)
file(GLOB HDR_FILES ./*.hpp)

add_executable(stack ${SRC_FILES} ${HDR_FILES})


