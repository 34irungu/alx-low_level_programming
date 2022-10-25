#include "main.h"

/**
 * _strlen - -prints the length of a string
 *
 * Return: The length of teh string
 * @s: The paarmeter to be checked
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
