#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: The memory area to be copied to
 * @src: The memory area to copy to destination
 * @n: The number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
