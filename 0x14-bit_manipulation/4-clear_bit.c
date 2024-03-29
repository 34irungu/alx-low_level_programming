#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit at a particular index to 0
 * @n: Number to convert to modify
 * @index: Index of the bit to modify
 *
 * Return: 1 (on success), -1 (on failure).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index < sizeof(n) * 8)
	{
		*n &= (~(1UL << index));
		return (1);
	}

	return (-1);
}
