#include "main.h"
#include <stddef.h>
/**
 * _strncpy - copies n bytes of data from src to dest
 * @dest: pointer to the dest array(where to copy)
 * @src: The pointer to the string to be copied
 * @n: The first n chars copied from src to dest
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

