#!/usr/bin/python3
"""Module that contains the Square class"""


class Square:
    """Initialize the Square instance

    Args:
        size: The size of the Square instance
    """

    def __init__(self, size=0, position=(0, 0)):

        if type(size) is not int:
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

        if type(position) is not tuple or\
           len(position) != 2 or\
           type(position[0]) is not int or\
           type(position[1]) is not int or\
           position[0] < 0 or position[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")

        self.__size = size
        self.__position = position

    """Getter method for `size` attribute

    Returns:
        Private attribute `size`
    """
    @property
    def size(self):

        return self.__size

    """Setter method for `size` attribute

    Returns:
        Private attribute `size`
    """
    @size.setter
    def size(self, size):

        if type(size) is not int:
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size

    """Getter method for `position` attribute

    Returns:
        Private attribute `position`
    """
    @property
    def position(self):

        return self.__position

    """Setter method for `position` attribute

    Returns:
        Private attribute `position`
    """
    @position.setter
    def position(self, position):

        if isinstance(position, tuple):

            if len(position) is not 2:
                raise TypeError("position must be a" +
                                "tuple of 2 positive integers")

            if not isinstance(position[0], int):
                raise TypeError("position must be a" +
                                "tuple of 2 positive integers")

            if not isinstance(position[1], int):
                raise TypeError("position must be a" +
                                "tuple of 2 positive integers")

            for i in position:
                if i < 0:
                    raise TypeError("position must be a" +
                                    "tuple of 2 positive integers")

        else:
            raise TypeError("position must be a tuple of 2 positive integers")

        self.__position = position

    """Handles computation

    Returns:
        Computed area attribute `size`
    """
    def area(self):

        return self.__size ** 2

    """Handles printing

    Returns:
        The size x size square
    """
    def my_print(self):

        if self.size == 0:
            print()

        for i in range(self.__position[1]):
            print()

        for j in range(self.__size):
            print("_" * self.__position[0], end="")
            print("#" * self.size)
