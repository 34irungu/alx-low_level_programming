#include "main.h"

/**
 * print_last_digit - Computes the last digit of a number
 *
 * @n: The number to be computed
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;

	if (lastdig < 0)
	{
		lastdig = -1 * lastdig;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
