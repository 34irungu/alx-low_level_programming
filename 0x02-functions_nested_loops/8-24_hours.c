#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Return: 0.
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i < '3'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < '2' && j <= '9') || (i < '3' && j < '4'))
			{
				for (k = '0'; k < '6'; k++)
				{
					for (l = '0'; l <= '9'; l++)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
