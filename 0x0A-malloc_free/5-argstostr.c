#include <stdlib.h>

/**
 * *argstostr - concatenates CLI args without argc & argv
 * @ac: argument count variable
 * @av: ptr->ptr->argument values
 * Return: ptr
 */

char *argstostr(int ac, char **av)
{
	char *ch, *ptr;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++) /* gets count of ac */
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	ch = malloc(total * sizeof(char)); /* allocates for ac size */

	if (ch == NULL) /* ensures memory allocated */
		return (NULL);

	ptr = ch;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ch = av[i][j]; /* sets to argument */
			ch++;
		}
		*ch = '\n';
		ch++;
	}

	return (ptr);
}
