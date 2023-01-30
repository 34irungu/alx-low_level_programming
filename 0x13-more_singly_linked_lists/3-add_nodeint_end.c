#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a linked list
 * @head: The head of a linked list
 * @n: the value to add to the new node
 *
 * Return: The address of the new element(on success), NULL (on failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->next = NULL;
		newNode->n = n;

		if (*head == NULL)
		{
			*head  = newNode;
			return (*head);
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
	return (0);
}
