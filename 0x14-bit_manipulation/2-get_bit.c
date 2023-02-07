#include "main.h"

/**
 * get_bit - gets the value of a bit at a particular index
 * @n: Number to convert to binary
 * @index: Index of the bit
 *
 * Return: Value of index (on success), -1 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/** check if index is out of range */
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	/** use bitwise AND to get the value of the bit at index */
	return ((n & (1UL << index)) != 0);
}
