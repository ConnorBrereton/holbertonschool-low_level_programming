#!/usr/bin/python3


def mutiply_list_map(my_list=[], number=0):

    """
    fail check
    """
    if not my_list:
        return []

    result = list(map(lambda i: i * number, my_list))
    return result
