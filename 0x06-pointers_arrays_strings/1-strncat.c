#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the string to be modified
 * @src: pointer to the string which should be appended to the end of dest
 * @n: Represents the maximum # of chars to be appended
 *
 * Return: value of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}

	while (i < n && src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len + n + 1] = '\0';

	return (dest);
}
