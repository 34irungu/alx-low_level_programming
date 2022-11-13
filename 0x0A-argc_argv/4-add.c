#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the first argument passed to it
 * @argc: The # of arguments passed to the function
 * @argv: Pointer to strings whose meaning will be determined by the program
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;
	char *m;
	unsigned int l;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			m = argv[count];

			for (l = 0; l < strlen(m); l++)
			{
				if (m[l] < 48 || m[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(m);
			m++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
