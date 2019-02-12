#!/usr/bin/python3
"""Module that contains the island_perimeter() method"""


def island_perimeter(grid):
    """Method that computes the perimeter of a 2D array

    Args:
        grid: 2D array of 1 and 0 values
        1's are land and 0's are water

    Raises:
        none

    Returns:
        perimeter of `area`
    """

    if type(grid) is not list or type(grid[0]) is not list:
        return [[]]

    H, W = len(grid), len(grid[0])
    valid_land, invalid_land = 0, 0

    for row in range(H):
        for col in range(W):

            if grid[row][col] == 1:
                valid_land += 1

                if row > 0 and grid[row - 1][col] == 1:
                    invalid_land += 1

                if col > 0 and grid[row][col - 1] == 1:
                    invalid_land += 1

    return 4 * valid_land - 2 * invalid_land
