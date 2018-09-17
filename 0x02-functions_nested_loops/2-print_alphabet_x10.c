#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * desc - print low-alpha 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, count = 9;
	char c[] = "abcdefghijklmnopqrstuvqxyz";

	while (count > -1)
	{
		for (i = 0; i < 27; i++)
			_putchar(c[i]);
		_putchar('\n');
		count--;
	}
}
