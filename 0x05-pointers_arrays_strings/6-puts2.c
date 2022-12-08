#include "main.h"

/**
 * puts2 - prints a char
 *
 * @str: The characters to check.
 * Return: 0.
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
