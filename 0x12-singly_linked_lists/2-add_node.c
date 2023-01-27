#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning
 * @head: The first element of a linked list
 * @str: The element to be added
 *
 * Return: The new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head != NULL && str != NULL)
	{
		newNode = malloc(sizeof(list_t));

		if (newNode == NULL)
			return (NULL);

		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = *head;

		*head = newNode;

		return (*head);
	}

	return (0);
}
