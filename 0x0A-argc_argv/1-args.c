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
	(void) argv;
	printf("%d\n", argc);

	return (0);
}
