#include <stdio.h>
/**
 * main - prints letters of the alphabet except q and except
 *
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (c == 'e')
		{
			c++;
			while(c == 'q')
			{
				c++;
			}
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
