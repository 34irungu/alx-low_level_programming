#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: Pointer to a string a string of 0's and 1's.
 *
 * Return: (on success) 1, (on failure) 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;


	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num << 1;
		num += b[i] - '0';
		i++;
	}

	return (num);
}
