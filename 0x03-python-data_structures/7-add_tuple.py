#!/usr/bin/python3


def add_tuple(tuple_a=(), tuple_b=()):

    if tuple_a is None or tuple_b is None:
        return None

    la = len(tuple_a)
    lb = len(tuple_b)

    if la == 0 and lb == 0:
        s = 0 + 0, 0 + 0

    elif la == 0 and lb == 1:
        s = 0 + tuple_b[0], 0 + 0

    elif la == 0 and lb == 2:
        s = 0 + tuple_b[0], 0 + tuple_b[1]

    elif la == 1 and lb == 0:
        s = tuple_a[0] + 0, 0 + 0

    elif la == 1 and lb == 1:
        s = tuple_a[0] + tuple_b [0], 0 + 0

    elif la == 1 and lb == 2:
        s = tuple_a[0] + tuple_b[0], 0 + tuple_b[1]

    elif la == 2 and lb == 0:
        s = tuple_a[0] + 0, tuple_a[1] + 0

    elif la == 2 and lb == 1:
        s = tuple_a[0] + tuple_b[0], tuple_a[1] + 0

    else:
        s = tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1]

    return s
