#!/usr/bin/python3


def delete_at(my_list=[], idx=0):

    if not my_list:
        return None

    if idx <= 0 or idx > len(my_list) - 1:
        return my_list

    del my_list[idx]

    return my_list