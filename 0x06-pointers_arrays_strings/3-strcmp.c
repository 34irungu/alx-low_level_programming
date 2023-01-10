#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: if s1 < s2, negative integer. if equal 0 if greater positive.
 */
int _strcmp(char *s1, char *s2)
{
	int charCompareStatus = 0;

	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	/*compare the mismatching character*/

	charCompareStatus = *s1 - *s2;

	return (charCompareStatus);
}
