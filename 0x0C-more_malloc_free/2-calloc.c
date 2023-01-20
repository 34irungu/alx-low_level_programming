#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Size of the array
 * @size: The bytes each element has
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = nmemb * size;
	mem = malloc(p);

	if (mem == NULL)
		return (NULL);

	return (mem);
}

