#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: The string to separate the numbers
 * @n: Total arguments passed to the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list arg_s;

	va_start(arg_s, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(arg_s, int));

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_s);
}
