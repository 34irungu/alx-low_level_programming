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
	char *mem;
	unsigned int p = 0, l = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = nmemb * size;
	mem = malloc(p);

	if (mem == NULL)
		return (NULL);

	while (l < p)
	{
		mem[l] = 0;
		l++;
	}

	return (mem);
}

