#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers 0-14
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l > 9)
			{
				_putchar(l / 10 + '0');
			}

			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
