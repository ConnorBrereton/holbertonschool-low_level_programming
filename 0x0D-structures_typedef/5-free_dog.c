#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - deletes the `dog` struct & members
 * @d: pointer to the struct
 * Return: failure (NULL)
 */

void free_dog(dog_t *d)
{
	if (d != NULL) /* if struct exists */
	{
		if (d->name != NULL) /* if d->name exists */
			free(d->name);
		if (d->owner != NULL) /* if d->owner exists */
			free(d->owner);
		free(d); /* free pointer to struct */
	}
	return;
}
