#include "lists.h"

/**
 * listint_len - counts the no. of elements
 * @h: The First element
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
