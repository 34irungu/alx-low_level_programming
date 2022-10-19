#include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 *
 * Return: 0.
 */
int main(void)
{
	int i = '0';

	do
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
       	while (i <= '9');
	putchar('\n');
	return (0);
}
