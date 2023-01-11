#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: Pointer to the string.
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i = 0, n = 0, b = 5;

	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char m[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		n = 0;

		while (n < b)
		{
			if (s[i] == l[n] || s[i] - 32 == l[n])
			{
				s[i] = m[n];
			}
			n++;
		}

		i++;
	}
	return (s);
}
