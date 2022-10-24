#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for an integer character b2n 0 and 9
 * @c: The integer number to be checked by the function
 *
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
