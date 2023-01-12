#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: The base string in which we want to search the substring
 * @needle: The substring
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *p;
	char *q = needle;

	while (*start)
	{
		p = start;


		while (*p && *q && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (start);
		}
		if (p == start)
		{
			start++;
		}
		else
		{
			start = p;
		}
	}
	return (NULL);
}


