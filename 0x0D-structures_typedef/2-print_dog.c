#include "dog.h"
#include <stdio.h>
#define NIL "(nil)"
#define NULL ((void *)0)

/**
 * print_dog - prints the members of 'dog' struct
 * @d: pointer to struct aka-ADT
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* update value to "(nil)" if member is NULL */
	if (d->name == NULL)
		d->name = NIL;

	if (d->owner == NULL)
		d->owner = NIL;

	/* note: type age cannot hold (nil) */
	/* print the members of the struct */
	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
