#!/usr/bin/python


import random
number = random.randint(-10000, 10000)

if number < 0:
    number *= -1

ld = number % 10

print("Last digit of {:d} is {:d}".format(number, ld), end=' and is ')

if ld > 5:
    print("greater than 5")
elif ld == 0:
    print("is 0")
else:
    print("less than 6 and not 0")
