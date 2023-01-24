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
	f(name);
}

/**
 * f - prints a name
 * @name: The name to be printed
 *
 * Return: Nothing.
 */
void f(char *name)
{
	printf("%s\n", name);
}
