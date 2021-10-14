#!/usr/bin/env python
"""
module doc
"""

import platform
import numpy as np


def print_os_info():
    """
    OS情報を表示
    """
    print(platform.system())
    print(platform.release())


def no_docstring(vara=None, varb=None):
    """ test docstring """
    print(vara)
    print(varb)


def warning_func():
    """
    違反コードを多く含む関数
    """
    var_0 = 0

    # hyper nested
    for i in range(10):
        for _ in range(5):
            for _ in range(3):
                var_0 += i

    no_docstring(vara="5", varb="6")
    no_docstring(vara="5", varb="6")

    var_a = np.ndarray((5, 8))
    this_variable_is_named_to_create_long_line_above_80_characters = var_a.argmax()
    print(this_variable_is_named_to_create_long_line_above_80_characters)

    # too many returns and branches
    if var_0 is None:
        return 0

    return 9
