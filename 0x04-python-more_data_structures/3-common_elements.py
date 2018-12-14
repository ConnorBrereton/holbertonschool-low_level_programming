#!/usr/bin/python3


def common_elements(set_1, set_2):

    """
    checks for empty set
    and returns empty set if so
    """
    if not set_1 or not set_2:
        return []

    return set_1 & set_2
