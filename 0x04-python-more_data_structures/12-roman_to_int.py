#!/usr/bin/python3


def roman_to_int(roman_string):

    """
    fail check
    """
    if not roman_string or type(roman_string) is not str:
        return 0

    add = 0
    sub = 0

    for ch in range(len(roman_string)):
        pt = translate(roman_string[ch])
        add += pt

    if "IV" in roman_string or "IX" in roman_string:
        sub += 2

    if "XL" in roman_string or "XC" in roman_string:
        sub += 20

    if "CD" in roman_string or "CM" in roman_string:
        sub += 200

    return add - sub


def translate(char):

    idx = 0

    list1 = ["I", "V", "X", "L", "C", "D", "M"]
    list2 = [1, 5, 10, 50, 100, 500, 1000]

    i = list1.index(char)

    return list2[i]
