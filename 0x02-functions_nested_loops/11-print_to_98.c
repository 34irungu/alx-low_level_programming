#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from a certain number n to 98
 * @n: The number to compare 98 to.
 *
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
		(n = 98);
	{
		printf("%d", n);
	}
	printf("\n");
}
