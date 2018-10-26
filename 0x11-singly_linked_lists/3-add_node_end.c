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

	char *string;

	int i;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	/* calc length of new node string */
	for (i = 0; str[i]; i++)
		;

	tail->str = string;
	tail->len = i;
	tail->next = NULL;

	if (*head == NULL)
		*head = tail;

	else
	{
		/* find last node */
		while (end->next != NULL)
			end = end->next;

		end->next = tail;
	}
	return (tail);
}
