#include <stdio.h>
#include <stdlib.h>

void print_diagonal(int n)
{
	int i, j;

	j = 0;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (j <= n)
	{
		for (i = (j - 1); i <= n; i++)
			putchar(' ');

		putchar('\\');
		putchar('\n');
		j++;
	}
}
