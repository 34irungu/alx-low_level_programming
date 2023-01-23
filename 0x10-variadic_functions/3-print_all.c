#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a constant string
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arg_s;
	char c, *separator = ", ";
	int i = 0;

	va_start(arg_s, format);

	while ((c = format[i]) != '\0')
	{
		if (c == 'c')
		{
			char next_arg = va_arg(arg_s, int);

			printf("%c%s", next_arg, separator);
		}
		else if (c == 'i')
		{
			int next_arg = va_arg(arg_s, int);

			printf("%d%s", next_arg, separator);
		}
		else if (c == 'f')
		{
			double next_arg = va_arg(arg_s, double);

			printf("%f%s", next_arg, separator);
		}
		else if (c == 's')
		{
			char *next_arg = va_arg(arg_s, char *);

			if (next_arg == NULL)
				printf("(nil)");
			else
				printf("%s", next_arg);
		}
		i++;
	}
	va_end(arg_s);
	printf("\n");
}
