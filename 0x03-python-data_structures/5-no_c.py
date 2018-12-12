#!/usr/bin/python3


def no_c(my_string):

    if my_string is None:
        return None

    valid_str = ""

    for i in my_string:
        if i != 'c' and i != 'C':
            valid_str += i

    return valid_str
