#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - ...
 * @separator: ...
 * @n: Total arguments passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list arg_s;

	va_start(arg_s, n);

	for (; i < n; i++)
	{
		char *string = va_arg(arg_s, char *);

		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_s);
}
