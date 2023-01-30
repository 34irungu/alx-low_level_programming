#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: The head of a linked list
 * @n: the value to add to the new node
 *
 * Return: The address of the new element(on success), NULL (on failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	if (head != NULL)
	{
		current = malloc(sizeof(listint_t));

		if (current == NULL)
			return (NULL);

		current->n = n;
		current->next = *head;

		*head = current;

		return (*head);
	}
	return (0);
}
