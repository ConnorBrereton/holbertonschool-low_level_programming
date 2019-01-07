#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - printf (n..98) in natural numbers.
 *
 * @n: starting point
 *
 * Return: nonapplicable
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		else
		{
			printf("%i, ", n);
			n--;
		}
	}
	printf("%i\n", n);
}
