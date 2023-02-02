#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Searches for a node
 * @head: Pointer to the head of a linked list
 * @index: Index of the node to be returned
 *
 * Return: Pointer to the node specified in the linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head != NULL)
	{
		for (; n != index; n++)
		{
			head = head->next;
		}
	}
	if (n == index)
	{
		return (head);
	}
	else
		return (NULL);
}
