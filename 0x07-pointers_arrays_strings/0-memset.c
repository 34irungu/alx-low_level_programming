#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area to be filled
 * @b: The byte to fill memory with
 * @n: The nunber of bytes
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

