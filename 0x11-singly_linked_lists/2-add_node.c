#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *add_node - adds a node to the front
 * of the list
 *
 * @head: pointer to first node
 *
 * @str: string in the node
 *
 * Return: address (success) NULL (fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	char *string;

	int i;

	/* create & check new node */
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	/* fill node with data */
	string = strdup(str);

	if (string == NULL)
	{
		free(temp);
		return (NULL);
	}

	/* calc length of new node string */
	for (i = 0; str[i]; i++)
		;

	/* reassign data */
	temp->str = string;
	temp->len = i;
	temp->next = *head;

	*head = temp;

	/* address of new node */
	return (temp);
}
