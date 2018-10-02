#define NULL 0
/**
 * match - loops both arrays and breaks
 * @haystack: memory area pointed to.
 * @needle: constant byte to fill memory with.
 * Return: pointer to beginning of located substring
 *              or NULL if not found.
 */

int match(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);

		haystack++;
		needle++;
	}
	return (1);
}


/**
 * _strstr - locates a substring in given string
 * @haystack: memory area pointed to.
 * @needle: constant byte to fill memory with.
 * Return: pointer to beginning of located substring
 *		or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);
	
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && match(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
