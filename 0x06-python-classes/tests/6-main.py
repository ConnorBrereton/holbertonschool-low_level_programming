#!/usr/bin/python3
Square = __import__('6-square').Square

my_square_1 = Square(3)
my_square_1.my_print()

print("--")

my_square_2 = Square(3, (1, 1))
my_square_2.my_print()

print("--")

my_square_3 = Square(3, (3, 0))
my_square_3.my_print()

print("--")


print("QA Test Cases")

mysquare = Square(3, (1, 1))
print(mysquare.size)
print(mysquare.area())
print(mysquare.position)

my_square = Square(3, (1, "3"))
print("^^ should be a position error")

mysquare = Square(3)
mysquare.my_print()
print("^^ should see a 3x3 matrix")

mysquare = Square(3, (0, 0))
mysquare.my_print()
print("^^ should see a 3x3 matrix")

mysquare = Square(3, (1, 0))
mysquare.my_print()
print("^^ should see a 3x3 matrix offset by 1")

mysquare = Square(3, (0, 1))
mysquare.my_print()
print("^^ should see a 3x3 matrix")

mysquare = Square(3, (1, 1))
mysquare.my_print()
print("^^ should see a 3x3 matrix offset by 1")

mysquare = Square(5, (3, 2))
mysquare.my_print()
print("^^ should see a 5x5 matrix offset by 3")

mysquare = Square(0, (10, 3))
mysquare.my_print()
print("^^ should see a typeerror")
