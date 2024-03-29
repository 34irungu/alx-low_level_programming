#include "main.h"

/**
 * set_bit - sets the value of a bit at a particular index to 1
 * @n: Number to convert to modify
 * @index: Index of the number to modify
 *
 * Return: 1 (on success), -1 (on failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	return ((*n |= 1 << index) ? 1 : -1);
}
