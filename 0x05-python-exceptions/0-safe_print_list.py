#!/usr/bin/python3


def safe_print_list(my_list=[], x=0):

    try:
        for e in range(x):
            print("{}".format(my_list[e]), end="")

    except IndexError:
        print()
        return e

    print()
    return x
