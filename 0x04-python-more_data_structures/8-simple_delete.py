#!/usr/bin/python3


def simple_delete(a_dictionary, key=""):

    """
    fail check
    """
    if not a_dictionary:
        return

    if key in a_dictionary:
        del a_dictionary[key]

    return a_dictionary
