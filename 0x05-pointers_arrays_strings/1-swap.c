#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: The pointer to the first integer
 * @b: The pointer to the second integer
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int irungu;

	irungu = *a;
	*a = *b;
	*b =  irungu;
}
