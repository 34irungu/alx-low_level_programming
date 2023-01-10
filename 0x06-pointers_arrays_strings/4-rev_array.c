#include "main.h"

/**
 * reverse_array -reverses an array of integers
 * @a: Pointer to the first element of the array
 * @n: Size of the array
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = temp;
	}
}
