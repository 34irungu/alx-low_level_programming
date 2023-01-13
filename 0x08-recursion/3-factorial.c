#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The integer
 *
 * Return: if n > 0 its factorial is returned, else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
