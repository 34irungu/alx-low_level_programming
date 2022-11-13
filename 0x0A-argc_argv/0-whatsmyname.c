#include <stdio.h>
#include "main.h"
#include <stdlib.h>
(#define UNUSED(argc) (void) (argc))
/**
 * main - prints the first argument passed to it
 * @argc: The # of arguments passed to the function
 * @argv: Pointer to strings whose meaning will be determined by the program
 *
 * Return: 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
