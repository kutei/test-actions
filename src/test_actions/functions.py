#!/usr/bin/env python

import os
import numpy as np
import platform

def print_os_info():
    """
    OS情報を表示
    """
    print(platform.system())
    print(platform.release())

def no_docstring(vara=None, varb = None):
    print(vara)
    print(varb)


def warning_func():
    """
    違反コードを多く含む関数
    """
    var0 = 0
    var1 = var0
    var2 = var1
    var3 = var2
    var4 = var3
    var5 = var4
    var6 = var5
    var7 = var6
    var8 = var7
    var9 = var8

    # hyper nested
    for n in range(10):
        for _ in range(5):
            for _ in range(3):
                for _ in range(2):
                    for _ in range(2):
                        for _ in range(2):
                            var9 += n

    no_docstring(vara="5", varb = "6")
    no_docstring(vara="5", varb="6")

    var_a = np.ndarray((5, 8))
    this_variable_is_named_to_create_long_line_above_80_characters = var_a.argmax()
    print(this_variable_is_named_to_create_long_line_above_80_characters, "######################102")
    print(this_variable_is_named_to_create_long_line_above_80_characters, "######################102", "#############122")

    # too many returns and branches
    if var0 is None:
        return 0
    elif var1 is None:
        return 1
    elif var2 is None:
        return 2
    elif var3 is None:
        return 3
    elif var4 is None:
        return 4
    elif var5 is None:
        return 5
    elif var6 is None:
        return 6
    elif var7 is None:
        return 7
    elif var8 is None:
        return 8
    elif var9 is None:
        return 9
