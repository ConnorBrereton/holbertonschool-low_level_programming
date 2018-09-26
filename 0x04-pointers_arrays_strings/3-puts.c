#include "holberton.h"
#include <unistd.h>

/**
 * _puts - write string to stdout
 *
 * @str: prints string
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
