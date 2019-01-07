#include "holberton.h"

/**
 * print_triangle - print square (size x size)
 *
 * @size: represents size
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = size - i;

			for (j = 1; j <= size; j++)
			{
				if (j < space)
					_putchar(' ');

				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}

	else if (size <= 0)
		_putchar('\n');
}
