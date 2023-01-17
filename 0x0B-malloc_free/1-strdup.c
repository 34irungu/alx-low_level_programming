#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space in memory
 * @str: the string
 *
 * Return: NULL if str is null or if there was insufficient memory.
 */
char *_strdup(char *str)
{
	char *ptr;
	int a = 0, i = 1;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		a++;
	}

	ptr[a] = '\0';

	return (ptr);
}
