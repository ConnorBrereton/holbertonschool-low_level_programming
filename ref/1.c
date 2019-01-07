#include <stdlib.h>
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	if (!a)
		return;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");
}
