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
	if ( argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int arg1 = 0, arg2 = 0;

		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);	

		printf("%d\n",  arg1 * arg2);
	}
	return (0);
}
