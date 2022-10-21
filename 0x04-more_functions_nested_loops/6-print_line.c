#include "main.h"

/**
 * print_line - function prints a line
 *
 * @n: The number of times to print _
 * Return: 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
