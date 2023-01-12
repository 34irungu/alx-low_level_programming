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
	char *start = dest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	while (*src && n--)
	{
		*dest++ = *src++;
	}

	return (start);

}
