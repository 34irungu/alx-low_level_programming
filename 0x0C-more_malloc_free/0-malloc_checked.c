#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: size to be allocated
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *bp;

	bp = malloc(b);

	if (bp == NULL)
	{
		exit(98);
	}

	return (bp);
}
