#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: The integer value to be checked.
 * Return: The absolute
 */
int _abs(int n)
{
	int k;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		k = -1 * n;
		return (k);
	}
}
