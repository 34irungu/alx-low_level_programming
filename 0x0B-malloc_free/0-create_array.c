#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the memory to print
 * @c: Initializes the array
 *
 * Return: Null if size = 0, of a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;


	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	m[i] = '\0';
	return (m);
}
