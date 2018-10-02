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
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1)) /* confines rows */
		sum1 += a[i];
		
	for (j = 0; j < size * size; j = j + (size - 1)) /* confines columns */
		sum2 += a[j];


	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
