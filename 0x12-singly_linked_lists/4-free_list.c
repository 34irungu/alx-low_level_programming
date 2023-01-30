#include "lists.h"
#include <stdlib.h>
/**
 * free_list - ...
 * @head: A linked list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current;



	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
	free(head);
}
