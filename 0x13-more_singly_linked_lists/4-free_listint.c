#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: First elements of a linked list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);

}
