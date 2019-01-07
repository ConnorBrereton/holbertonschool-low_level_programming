#include "holberton.h"

/**
 * _pow_recursion - computes exponents recursively
 * @x: base
 * @y: power
 * Return: computed number
 */

int _pow_recursion(int x, int y)
{
	/* exit error (cant compute fraction w/ given vars) */
	if (y < 0)
	{
		return (-1);
	}

	/* x^0 always equals 1 */
	else if (y == 0)
	{
		return (1);
	}

	/* recursion case */
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
