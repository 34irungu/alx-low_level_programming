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
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	ptr = malloc(size);
	strcpy(ptr, str);

	if (strlen(ptr) < size)
	{
		return (NULL);
	}
	return (ptr);
}
