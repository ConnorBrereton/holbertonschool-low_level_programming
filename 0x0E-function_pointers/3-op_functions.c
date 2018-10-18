#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns sum @a and @b
 *
 * @a: int
 * @b: int
 * Return: sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns @a - @b
 *
 * @a: int
 * @b: int
 * Return: difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns @a * @b
 *
 * @a: int
 * @b: int
 * Return: product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns @a / @b
 *
 * @a: int
 * @b: int
 * Return: quotient of @a and @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns @a % @b
 *
 * @a: int
 * @b: int
 * Return: modulus of @a and @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
