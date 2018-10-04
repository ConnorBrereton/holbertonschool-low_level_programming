#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else
	{
		return (is_prime(n, n - 1));
	}
}


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int is_prime(int a, int b)
{
	/* case: n = 2 */
	if (b < 2)
	{
		return (1);
	}

	/* case: a=2 b=1 */
	else if (a % b == 0)
	{
		return (0);
	}

	return (is_prime(a, b - 1));
}
