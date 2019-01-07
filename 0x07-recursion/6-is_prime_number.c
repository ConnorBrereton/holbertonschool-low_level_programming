#include "holberton.h"

/**
 * is_prime_number - returns 1 if number is prime
 * @n: variable for the number
 * Return: 1 (prime) 0 (invalid/nonprime)
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
 * is_prime - computes prime by comparison
 * @a: checks if dividable
 * @b: checks if multiple
 * Return: 1 (prime) 0 (invalid/nonprime)
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
