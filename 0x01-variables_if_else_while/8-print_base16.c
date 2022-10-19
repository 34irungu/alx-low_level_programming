#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0.
 */
int main(void)
{
	char c = 'a';
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
