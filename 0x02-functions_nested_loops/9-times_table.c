#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int m, n, o, p, q;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = m * n;

			if (o > 9)
			{
				p = o % 10;
				q = (o - p) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(q + '0');
				_putchar(p + '0');
			}
			else
			{
				if (n != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
