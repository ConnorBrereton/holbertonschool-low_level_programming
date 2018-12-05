#!/usr/bin/python3


for i in range(122, 96, -1):
    ch = i
    if i % 2 != 0:
        ch = i - 32
    print("{:c}".format(ch), end="")
