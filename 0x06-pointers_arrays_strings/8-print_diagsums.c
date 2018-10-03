#include <stdio.h>

/**
 * print_diagsums - map 2D->1D array and add up pattern
 * @a: pointer to array in memory
 * @size: row/column size
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	/* get a[0] a[4] a[6] pattern at scale */
	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum1 += a[i];
	}

	/* get a[2] a[4] a[6] pattern at scale */
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		sum2 += a[j];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
