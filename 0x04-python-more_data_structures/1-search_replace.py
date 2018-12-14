#!/usr/bin/python3


def search_replace(my_list, search, replace):

    """
    fail checks
    """
    if not my_list:
        return []

    result = list(map(lambda e: e if e != search else replace, my_list))
    return result
