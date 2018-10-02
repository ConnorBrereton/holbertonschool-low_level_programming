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
	int output1, output2;
	output1 = output2 = 0;

	int max = size * size;

	for (i = 0; i < max; i++)
		dump1 += a[i];

	for (j = 0; j < max; j++)
		dump2 += a[j];

	printf("%d, ", dump1);
	printf("%d\n", dump2);
}
