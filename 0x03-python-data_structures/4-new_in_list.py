#!/usr/bin/python3


def new_in_list(my_list, idx, element):
    if idx < 0 or idx > len(my_list) - 1:
        return my_list

    if my_list is None or idx is None or element is None:
        return my_list

    list_cp = my_list.copy()
    list_cp[idx] = element
    return list_cp
