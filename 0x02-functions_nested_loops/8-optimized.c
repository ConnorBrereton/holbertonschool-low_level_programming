#include "holberton.h"

/**
 * jack_bauer - Prints full day EU time min by min
 *
 * @i: controls the hours
 *
 * @j: controls the minutes
 *
 * description: Displays minbymin EU time w/o time lib
 *
 * Return: Void fcn so no value
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
