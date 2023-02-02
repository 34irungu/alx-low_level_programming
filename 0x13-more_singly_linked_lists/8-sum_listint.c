#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data of a linked list.
 * @head: The linked list
 *
 * Return: sum (on success), 0 (on failure)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
