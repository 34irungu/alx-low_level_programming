#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints the elements of a linked list
 * @h: A linked list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
