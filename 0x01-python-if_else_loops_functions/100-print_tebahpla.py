#!/usr/bin/python3


for i in range(122, 98, -1):
    if i % 2 == 0:
        continue
    else:
        new_string = chr(i - 32)
    print("{:s}".format(i), end=""
