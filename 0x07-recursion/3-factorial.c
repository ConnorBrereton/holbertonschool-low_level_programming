#include "holberton.h"

/**
 * factorial - calculate @n!
 * @n: the number to compute
 * Return: n! result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}

	else
	{
		return (1);
	}
}
