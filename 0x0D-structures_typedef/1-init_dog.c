#include "dog.h"

/**
 * init_dog - initialize the members of the dog structure
 * @d: pointer to the dog struct
 * @name: points to dog.name and init
 * @age: init of the dog.age
 * @owner: points to dog.owner and init
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
