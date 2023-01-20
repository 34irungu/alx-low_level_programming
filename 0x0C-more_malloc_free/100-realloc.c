#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: the size in bytes allocated to ptr
 * @new_size: the new size of the memory block
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (q = 0; q < old_size && q < new_size; q++)
	{
		nptr[q] = ((char *) ptr)[q];
	}
	free(ptr);
	return (nptr);
}
