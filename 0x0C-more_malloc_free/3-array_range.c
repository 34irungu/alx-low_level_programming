#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: First index of the array
 * @max: Last index of the array
 *
 * Return: Pointer to created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
