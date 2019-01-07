#include "holberton.h"

/**
 * print_number - prints any iteger of range "int"
 *
 * @n: variable for number
 *
 * Return: none
 */

void print_number(int n)
{
	if (n < 0)
	{
		negative((unsigned int) n);
	}
	else
	{
		positive((unsigned int) n);
	}
}


/**
 * positive - returns (0..4M)
 *
 * @n: variable for number
 *
 * Return: none
 */

void positive(unsigned int n)
{
	if ((n / 10) != 0)
	{
		positive(n / 10);
	}
	_putchar((n % 10) + '0');
}


/**
 * negative - returns (-2M .. 0)
 *
 * @n: variable for number
 *
 * Return: none
 */

void negative(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	positive((unsigned int) n);
}
