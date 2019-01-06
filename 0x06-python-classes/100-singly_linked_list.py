#!/usr/bin/python3
"""Module that contains the Node class"""


class Node:
    """Defines node of a singly linked list"""

    def __init__(self, data, next_node=0):
        """Initialize the Node instance

        Args:
            data: the integer in the node

            next_node: reference to next node
        """

        if type(data) is not int:
            raise TypeError("data must be an integer")

        if next_node is not None and type(next_node) is not Node:
            raise TypeError("next_node must be a Node object")

        self.__data = data
        self.__next_node = next_node

    @property
    def data(self):
        """Getter method for `data` attribute"""

        return self.__data

    @data.setter
    def data(self, value):
        """Setter method that sets the `data` attribute to
        the `value` attribute
        """

        if type(value) is not int:
            raise TypeError("data must be an integer")

        self.__data = value

    @property
    def next_node(self):
        """Getter method for `value` attribute"""

        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        """Setter method"""

        if next_node is not None and type(value) is not Node:
            raise TypeError("next_node must be a Node object")

        self.__next_node = value


class SinglyLinkedList:
    """Defines a singly linked list"""

    def __init__(self):
        """Initializes the head object"""

        self.__head = None

    def sorted_insert(self, value):
        """Creates instance if instance DNE and
        creates a new node
        """

        if self.__head is None:
            self.__head = Node(value, self.__head)
            return

        if type(value) is not int:
            raise TypeError("data must be an integer")

        new_node = Node(value, self.__head)
        self.__head = new_node

    def __str__(self):
        """Creates, sorts, and returns the list"""

        result = []
        curr = self.__head

        while curr is not None:
            result.append(curr.data)
            curr = curr.next_node

        result.sort()
        return "\n".join(str(node) for node in result)
