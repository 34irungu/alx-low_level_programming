#include "main.h"

/**
 * print_most_numbers - prints integer 0-9 except 2 and 4
 *
 * Return: 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2')
		{
			if (c != '4')
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');

}
