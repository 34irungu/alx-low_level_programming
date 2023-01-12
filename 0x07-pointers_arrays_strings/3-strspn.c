#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The null terminated string to be scanned
 * @accept: The null terminated string containing the characters to match
 *
 * Return: The length of the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, a = 0, n;

	while (accept[i])
	{
		n = 0;

		while (s[n] != 32)
		{
			if (accept[i] == s[n])
			{
				a++;
			}
			n++;
		}
		i++;
	}
	return (a);
}

