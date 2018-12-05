#!/usr/bin/python3


def remove_char_at(str, n):
    if n >= 0 and n < len(str):
        joined = str[:n] + str[n + 1:]
        return joined
    return str
