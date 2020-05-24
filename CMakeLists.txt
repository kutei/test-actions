project(action-test)
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 11)
enable_testing()

include_directories(include)

add_subdirectory(src)
add_subdirectory(test)