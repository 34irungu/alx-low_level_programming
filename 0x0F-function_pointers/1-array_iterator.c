#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: ...
 * @size: size of the array
 * @action: Pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		action(*(array + i));
	}
}
