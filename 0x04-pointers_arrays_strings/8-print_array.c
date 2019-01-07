#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints values with spaces
 *
 * @a: pointer to array
 * @n: size
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = n - 1;

		if (i < j)
		{
			printf("%i, ", a[i]);
		}

		else
			printf("%i", a[i]);
	}
	printf("\n");
}
