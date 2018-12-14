#!/usr/bin/python3


def update_dictionary(a_dictionary, key, value):

    """
    fail check
    """
    if not a_dictionary:
        return

    a_dictionary[key] = value
    return a_dictionary
