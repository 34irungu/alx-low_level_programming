#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: Pointer to the linked list.
 * @str: A string to be added as an element.
 *
 * Return: Address of the new element (success), Null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	if (str != NULL)
	{
		newNode = malloc(sizeof(list_t));

		if (newNode == NULL)
			return (NULL);

		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;

		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}
		else
		{
			current = *head;
			while (current->next)
				current = current->next;

			current->next = newNode;
			return (current);
		}
	}
	return (NULL);
}
