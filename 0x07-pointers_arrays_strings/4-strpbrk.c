#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The source string
 * @accept: The accepted string
 *
 * Return: Number of bytes in the Initial segment
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (accept[b] == s[a])
			{
				s += a;

				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
