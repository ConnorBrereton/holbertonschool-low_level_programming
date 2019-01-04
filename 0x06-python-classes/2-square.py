#!/usr/bin/python3
"""Defines the square class"""


class Square:
    """Initialize the Square instance

    Args:
        size: The size of the Square instance
    """

    def __init__(self, size=0):

        if not isinstance(size, int):
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size
