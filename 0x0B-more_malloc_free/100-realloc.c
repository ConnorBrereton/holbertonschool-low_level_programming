#include <stdlib.h>

/**
 * *_realloc - reallocates memory block and copies old->new
 * @ptr: points to old memory
 * @old_size: size in bytes of old memory
 * @new_size: size in bytes of new memory
 * Return: pointer to new memory @new
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *temp1;
	char *temp2;
	unsigned int i;

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);

		return (new);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	old_size = (new_size < old_size) ? new_size : old_size;

	temp1 = new;
	temp2 = ptr;

	for (i = 0; i < old_size; i++)
	{
		*temp1++ = *temp2++;
	}

	return (new);
}
