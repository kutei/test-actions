add_library(func function.cpp)

add_executable(main main.cpp)
target_link_libraries(main func)
