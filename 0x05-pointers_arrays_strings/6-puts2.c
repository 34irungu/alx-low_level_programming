#include "main.h"

/**
 * puts2 - prints a char
 *
 * @str: The characters to check.
 * Return: 0.
 */
void puts2(char *str)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(*str);
		i += 2;
		str += 2;
	}
	_putchar('\n');
}
