cmake_minimuM_required(VERSION 3.5)

project(lista_1)

add_executable(${CMAKE_PROJECT_NAME} lista_1_1.cpp lista_1_1.hpp main.cpp stack_gen.hpp)
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})

target_compile_features(${CMAKE_PROJECT_NAME} PUBLIC cxx_std_14)

target_compile_options(${CMAKE_PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic) 
