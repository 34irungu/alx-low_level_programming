#include "main.h"


/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 0, sign = 1, rep = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		while (s[i] >= '0' && s[i] <= '9')
		{
			rep = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}

		if (rep == 1)
		{
			break;
		}

		i++;
	}

	n = n * sign;
	return (n);
}
