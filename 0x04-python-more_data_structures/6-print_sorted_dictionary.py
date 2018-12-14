#!/usr/bin/python3


def print_sorted_dictionary(a_dictionary):

    """
    fail check
    """
    if not a_dictionary:
        return None

    for e in sorted(a_dictionary):
        print("{}: {}".format(e, a_dictionary[e]))
