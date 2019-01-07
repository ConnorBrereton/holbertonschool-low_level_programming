#include "holberton.h"

/**
 * puts_half - finds and prints midpoint on
 *
 * @str: pointer to numbers
 *
 * Return: none
 */

void puts_half(char *str)
{
	int j, mid;
	int i = 0;

	while (str[i] != '\0') /* gets size */
	{
		i++;
	}
	i = i + 1;

	if (!(i % 2))
		mid = (i - 1) / 2; /* odd size start */

	else
		mid = i / 2; /* even size start */

	for (j = mid; str[j] != '\0'; j++) /* print mid->end */
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
