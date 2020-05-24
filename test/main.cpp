#include "test-action/function.hpp"
#include <iostream>

static int test_a();
static int test_b();

int main(int argc, char const *argv[])
{
    int fail = 0;
    fail += test_a();
    fail += test_b();
    return fail;
}

int test_a(){
    int fail = 0;

    if(0 == function_a(0)){
        std::cout << "TEST1: OK" << std::endl;
    }else{
        std::cout << "TEST1: NG" << std::endl;
        fail++;
    }
    return fail;
}

int test_b(){
    int fail = 0;
    int input = 0;

    input=5;
    if(10 == function_b(input)){
        std::cout << "TEST2: OK" << std::endl;
    }else{
        std::cout << "TEST2: NG" << std::endl;
        fail++;
    }
    return fail;
}
