#include "holberton.h"

/**
 * *_strcpy - copies string from src->dest
 *
 * @src: old string
 * @dest: new string
 *
 * Return: none
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0') /* dest matches src until end */
		*dest++ = *src++;
	return (temp);
}
