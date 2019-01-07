#include <stdlib.h>

/**
 * *_strdup - copy, allocate memory, and put src string
 * into new string in memory
 *
 * @str: pointer to string
 *
 * Return: str2 (success) NULL (failure)
 */

char *_strdup(char *str)
{
	int len = 0;
	char *str2;
	char *temp;

	if (str == NULL) /* case: empty string */
		return (NULL);

	while (str[len]) /* gets length of str */
		len++;

	str2 = malloc(sizeof(*str) * (len + 1)); /* malloc mirror memory */

	temp = str2;

	if (str2 == NULL) /* check insufficient memory */
		return (NULL);

	while (*str) /* copy contents */
		*temp++ = *str++;

	*temp = '\0'; /* last index needs NULL char */
	return (str2);
}
