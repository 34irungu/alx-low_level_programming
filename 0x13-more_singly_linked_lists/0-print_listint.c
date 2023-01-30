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
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
