#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @a: pointer to array
 * @size: mxn size
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int dump1, dump2;
	dump1 = dump2 = 0;

	for (i = 0; i < size; i++)
		dump1 += a[i];

	for (j = 0; j < size; j++)
		dump2 += a[j];

	printf("%d, ", dump1);
	printf("%d\n", dump2);
}
