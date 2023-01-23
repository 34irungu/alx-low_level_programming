#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: Total number of parameters passed
 *
 * Return: integer value.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int res = 0, i;
	va_list arg_s;

	va_start(arg_s, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(arg_s, int);
	}
	va_end(arg_s);
	return (res);
}
