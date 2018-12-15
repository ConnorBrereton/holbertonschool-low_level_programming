#!/usr/bin/python3


def complex_delete(a_dictionary, value):

    """
    complex_delete - removes keys that have a specific value

    @a_dictionary: dictionary to traverse

    @value: value to search for
    """

    if not a_dictionary:
        return {}

    if not value:
        return a_dictionary

    found = list(k for k in a_dictionary.keys() if a_dictionary[k] == value)

    for value in found:
        del a_dictionary[value]

    return a_dictionary
