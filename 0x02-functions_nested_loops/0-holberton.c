#include "holberton.h"

/**
 * main - Entry point
 *
 * description - print out a string using only _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c[] = "Holberton";

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
