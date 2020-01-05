cmake_minimum_required(VERSION 3.10)

project(matrix VERSION 1.0)

add_executable(matrix main.cpp)

target_include_directories(matrix PUBLIC "${PROJECT_BINARY_DIR}")
