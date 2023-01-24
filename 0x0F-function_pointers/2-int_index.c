#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: compares two integers
 *
 * Return: integer value.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, val = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
		{
			val = cmp(array[i]);

			if (val == 1)
				break;
			else if ((i == size - 1) && (val != 1))
				return (-1);
		}
	}
	return (i);
}
