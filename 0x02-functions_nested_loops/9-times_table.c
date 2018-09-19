#include "holberton.h"

/**
 * times_table - see README.md
 *
 * Return: Nonapplicable
 */

void times_table(void)
{
	int i, j, sum;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			sum = i * j;
			if (j == 0)
			{
				_putchar(sum + '0');
			}
			else if (sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + '0');
			}
			else if (sum >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
