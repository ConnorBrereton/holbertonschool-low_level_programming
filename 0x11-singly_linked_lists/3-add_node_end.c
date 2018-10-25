#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * *add_node_end - adds node to end of
 * linked list, copies string, holds size
 * of string
 *
 * @head: Points to the struct in header
 *
 * @str: Points to string in struct
 *
 * Return: Address (success) 1 (fail)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;

	list_t *end = *head;

	if (head == NULL)
		return (NULL);

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
		return (NULL);

	/* fill node with data */
	if (str == NULL)
		tail->str = NULL;

	else
		tail->str = strdup(str);

	/* tail node has no successor */
	tail->next = NULL;

	/* calc length of new node string */
	tail->len = (tail->str == NULL) ? 0 : strlen(str);

	/* case 1: one node */
	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	/* find last node */
	while (end->next != NULL)
		end = end->next;

	end->next = tail;

	return (tail);
}
