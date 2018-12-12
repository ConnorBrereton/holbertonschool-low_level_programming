#!/usr/bin/python3


def max_integer(my_list=[]):

    if my_list is None:
        return None

    base = my_list[0]

    for i in my_list:
        if i > base:
            base = i

    return (base)
