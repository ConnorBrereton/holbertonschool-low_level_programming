#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: used to allocate size for malloc
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *make;

	make = malloc(b);

	if (make == NULL)
		exit(98);

	return (make);
}
