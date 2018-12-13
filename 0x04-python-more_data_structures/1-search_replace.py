#!/usr/bin/python3


def search_replace(my_list, search, replace):

    """
    fail checks
    """
    if my_list is None or len(my_list) == 0:
        return None

    result = list(map(lambda e: e if e != search else replace, my_list))
    return result
