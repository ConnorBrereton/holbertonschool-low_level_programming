#!/usr/bin/python3


def square_matrix_simple(matrix=[]):

    if matrix is None or len(matrix) == 0:
        return None

    result = [[i**2 for i in subset] for subset in matrix]
    return result
