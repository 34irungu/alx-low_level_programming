#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: Pointer to the string
 *
 * Return: value of s
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, 9, 10, 44, 40, 41, 46, 33, 59, 63, 123, 125, 34};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
