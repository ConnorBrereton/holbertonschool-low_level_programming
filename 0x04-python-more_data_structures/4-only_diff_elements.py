#!/usr/bin/python3


def only_diff_elements(set_1, set_2):

    """
    fail checks
    """
    if not set_1 or not set_2:
        return None

    return set_1 ^ set_2
