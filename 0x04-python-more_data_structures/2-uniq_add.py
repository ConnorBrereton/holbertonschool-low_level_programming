#!/usr/bin/python3


def uniq_add(my_list=[]):

    """
    fail check
    """
    if my_list is None or len(my_list) == 0:
        return None

    result = sum(set(my_list))
    return result
