#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - counts length of a string
 * @s: pointer to string
 * Return: size of string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s++)
		size++;

	return (size);
}


/**
 * *new_dog - creates a new struct and copies values
 * @name: points to the members `name` value
 * @age: members `age` value
 * @owner: points to the members `owner` value
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_size = 0, owner_size = 0;
	char *temp_name, *temp_owner;
	dog_t *new_struct;

	new_struct = malloc(sizeof(dog_t)); /* malloc & check new struct */
	if (new_struct == NULL)
		return (NULL);

	name_size = _strlen(name); /* det. length of data to store */
	owner_size = _strlen(owner);

	temp_name = malloc(sizeof(char) * name_size + 1); /* store `name` */
	if (temp_name == NULL)
	{
		free(new_struct);
		return (NULL);
	}

	for (i = 0; i < name_size; i++)
		temp_name[i] = name[i];
	temp_name[i] = '\0';

	temp_owner = malloc(sizeof(char) * owner_size + 1); /* store `owner` */
	if (temp_owner == NULL)
	{
		free(temp_name);
		free(new_struct);
		return (NULL);
	}

	for (i = 0; i < owner_size; i++)
		temp_owner[i] = owner[i];
	temp_owner[i] = '\0';

	new_struct->name = temp_name; /* copy contents to `new_struct` and return */
	new_struct->age = age;
	new_struct->owner = temp_owner;
	return (new_struct);
}
