/**
 * @file main.cpp
 * @brief main関数用ソースファイル
 */

#include "test-action/function.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    int a = function_a(2);
    int b = function_b(a);
    std::cout << a << "," << b <<std::endl;
    return 0;
}
