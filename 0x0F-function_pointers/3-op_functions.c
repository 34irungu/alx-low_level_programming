#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - ...
 * @a: ...
 * @b: ...
 *
 * Return: integer value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ...
 * @a: ...
 * @b: ...
 *
 * Return: integer value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 *
 * Return: integer value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...
 * @a: ...
 * @b: ...
 *
 * Return: integer value
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - ...
 * @a: ...
 * @b: ...
 *
 * Return: integer value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
