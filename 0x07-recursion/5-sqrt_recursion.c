#include "holberton.h"

/**
 * _sqrt_recursion - sqrt() without library
 * @n: integer to compute
 * Return: -1 (fail) n (success)
 */

int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
	{
		return (-1);
	}

	/* recursive case */
	else
	{
		return (root_compute(1, n));
	}
}


/**
 * root_compute - computes sqrt()
 * @a: lower bound
 * @b: upper bound
 * Return: int
 */

int root_compute(int a, int b)
{
	/* ignore imaginary numbers */
	if (a > b)
	{
		return (-1);
	}

	/* natural root */
	else if (a * a == b)
	{
		return (a);
	}

	/* increment and try again */
	else
	{
		return (root_compute(a + 1, b));
	}
}
