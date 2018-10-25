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
 * Return: address (success) 1 (fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	/* check for struct */
	if (head == NULL)
		return (NULL);

	/* create & check new node */
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	/* fill node with data */
	if (str == NULL)
		temp->str = NULL;

	else
		temp->str = strdup(str);

	/* calc length of new node string */
	temp->len = (temp->str == NULL) ? 0 : strlen(str);

	/* reassign pointers */
	temp->next = *head;
	*head = temp;

	/* address of new node */
	return (*head);
}
