#include "holberton.h"

/**
 * print_last_digit - Prints last digit of any number
 *
 * @n: Variable that holds given number.
 *
 * Description: Determine abs val of @n.
 *
 * Return: Absolute value of @n
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m <= 0)
		m = -1 * m;
	_putchar(m + '0');
	return (m);
}
