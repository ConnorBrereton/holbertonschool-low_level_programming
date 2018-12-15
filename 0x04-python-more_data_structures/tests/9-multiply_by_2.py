#!/usr/bin/python3


def multiply_by_2(a_dictionary):

    """
    fail check
    """
    if not a_dictionary:
        return 0

    nd = a_dictionary.copy()

    for key in nd:
        nd[key] *= 2

    return nd
