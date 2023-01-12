#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: The char to locate
 * @s: The string
 *
 * Return: Null if char not found, Pointer to the first occurence otherwise
 */
char *_strchr(char *s, char c)
{
	int d = 0, k;

	while (s[d])
	{
		d++;
	}

	for (k = 0; k <= d; k++)
	{
		if (c == s[k])
		{
			s += k;
			return (s);
		}
	}

	return ('\0');
}
