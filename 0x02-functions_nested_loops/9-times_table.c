#include "holberton.h"

/**
 * times_table - prints nxn (0..9) * (0 ** 9) table 
 *
 * @i: holds the "i" value 
 *
 * @j: holds the "j" value
 *
 * description: print the 9 times table, starting with 0
 *
 * Return: Void fcn so no value
 */

void times_table(void)
{
	int i, j, sum;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			sum = (i * j) % 10;
			_putchar(sum + '0');
		}
	}
}
