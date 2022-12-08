#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @dest: Pointer to buffer where the string is being copied
 * @src: Pointer to the string
 *
 * Return: value of dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	char *ptr_dest;

	ptr_dest = dest;

	while (1)
	{
		dest[i] = src[i];

		if (dest[i] == '\0')
		{
			break;
		}

		i++;
	}
	return (ptr_dest);
}

