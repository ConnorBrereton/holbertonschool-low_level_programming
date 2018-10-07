
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - return size of array
 *
 * @s: pointer to char array
 *
 * Return: count
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s++) != '\0')
	{
		i++;
	}
	return (i);
}
