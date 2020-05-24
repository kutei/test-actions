add_executable(func_test main.cpp)
target_link_libraries(func_test func)
add_test(
    NAME unit_test
    COMMAND $<TARGET_FILE:func_test>
)
