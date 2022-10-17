#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the last digit of a random nunber
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int lastdig;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		lastdig = n % 10;
	}
	else
	{
	  lastdig = (((-1 * n) % 10) * -1);
	}
		if (lastdig > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
		}
		else if (lastdig == 0)
		{
		  printf("Last digit of %d is %d and is 0\n", n, lastdig);
		}
		else if (lastdig != 0 && lastdig < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
		}
	return (0);
}
