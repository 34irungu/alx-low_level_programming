#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t linked list
 * and sets the head pointer to NULL
 * @head:  double pointer to the listint_t structure
 *
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
