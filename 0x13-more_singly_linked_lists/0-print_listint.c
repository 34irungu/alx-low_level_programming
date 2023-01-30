#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints the elements of a list
 * @h: The linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
