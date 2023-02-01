#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes teh head node
 * @head: Pointer to the head node
 *
 * Return: Head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (head)
	{
		temp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (n);
}
