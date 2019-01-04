#!/usr/bin/python3
"""Module that contains the Square class"""


class Square:
    """Initialize the Square instance

    Args:
        size: The size of the Square instance
    """

    def __init__(self, size=0):
        self.size = size

    """Getter method for size attribute

    Returns:
        Private attribute `size`
    """
    @property
    def size(self):

        return self.__size

    """Setter method for size attribute

    Returns:
        Private attribute `size`
    """
    @size.setter
    def size(self, value):

        if not isinstance(value, int):
            raise TypeError("size must be an integer")

        if value < 0:
            raise ValueError("size must be >= 0")

        self.__size = value

    """Handles computation

    Returns:
        Computed area attribute `size`
    """
    def area(self):

        return self.__size ** 2
