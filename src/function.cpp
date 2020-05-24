/**
 * @file function.cpp
 * @brief 関数用ソースファイル
 */

#include "test-action/function.hpp"

#include <iostream>
#include <vector>

int function_a(int a)
{
    int* ptr = NULL;
    long ret = a;

    ptr = &a;
    if (*ptr == 0) {
        return a;
    } else if ((void*)ptr == NULL) {
        return a;
    } else {
        switch (*ptr) {
        case 1:
            return (int)ret;
            break;
        case 2:
        case 3:
            std::cout << "case 2 and 3" << std::endl;
            break;
        default:
            break;
        }
    }

    for (size_t i = 0; i < 5; i++) {
        int j = 0, k = 0;
        while (j < 5 && k < 6) {
            std::cout << i << "," << j << "," << k << std::endl;
        }
    }

    return a;
}

int function_b(int& start)
{
    std::vector<int> vct;
    int sum = 0;

    /* create 0-4 vector */
    for (size_t i = 0; i < start; ++i) {
        vct.emplace_back(i);
    }

    // calculate summation
    for (auto itr = vct.begin(); itr != vct.end(); ++itr) {
        sum += *itr;
    }

    return sum;
}

namespace testspace
{
TestClass::TestClass() { std::cout << "call Constructor" << std::endl; }
int TestClass::normal_function(int a)
{
    std::cout << "call normal_function" << std::endl;
    return prv_normal_function(a);
}

int TestClass::prv_normal_function(int a)
{
    std::cout << "call prv_normal_function" << std::endl;
    prv_val += a;
    return prv_val;
}
}  // namespace testspace
