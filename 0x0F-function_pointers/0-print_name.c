#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - ...
 * @name: ...
 * @f: Pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
