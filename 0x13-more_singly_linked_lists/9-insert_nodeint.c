#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a given node at a given position
 * @head: pointer to a linked list
 * @idx: Index of the list where the node should be inserted
 * @n: Data to a node
 *
 * Return: Address of the new node (on success), Null (on failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			current = *head;
			while (current)
			{
				if (i == idx)
				{
					new_node->next = current->next;
					current->next = new_node;
					return (new_node);
				}
				current = current->next;
				i++;
			}
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
