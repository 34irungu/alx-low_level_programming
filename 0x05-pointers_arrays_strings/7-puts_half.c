#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The string
 *
 * Return: 0.
 */
void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		len = (i - 1) / 2;
		len += 1;
	}
	else
		len = i / 2;

	for (; len < i; len++)
	{
		_putchar(str[len]);
	}

	_putchar('\n');
}
