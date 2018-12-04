#!/usr/bin/python
import random
number = random.randint(-10000, 10000)

ld = str(number)
digit = int(ld[-1:])
print(number)
print(digit)

print("Last digit of {:d} is {:d}".format(number, digit), end=' and is ')

if digit > 5:
    print("greater than 5")
elif digit == 0:
    print("is 0")
else:
    print("less than 6 and not 0")
