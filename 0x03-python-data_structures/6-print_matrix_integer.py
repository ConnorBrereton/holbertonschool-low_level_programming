#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):

    if matrix is None:
        return None

    spacer = ""

    for i in range(len(matrix)):
        j = 0

        for j in range(len(matrix[j])):
            print("{}".format(spacer), end="")
            print("{:d}".format(matrix[i][j]), end="")

            if j >= 0:
                spacer = " "

        spacer = ""
        print()
