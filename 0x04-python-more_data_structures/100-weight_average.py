#!/usr/bin/python3


def weight_average(my_list=[]):

    """
    fail check
    """
    if not my_list:
        return 0

    numer, denom, res = 0, 0, 0

    for t in my_list:
        numer += t[0] * t[1]
        denom += t[1]

    res = numer / denom
    return res
