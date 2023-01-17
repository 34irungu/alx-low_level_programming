#include "main.h"

int isPrime(int n, int i);
/**
 * is_prime_number - checks if a number is a  prime number
 * @n: The number to check.
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}

/**
 * isPrime - locates a prime number from i
 * @n: The number to check
 * @i: iterate number
 *
 * Return: The prime number
 */
int isPrime(int n, int i)
{

	if (n <= 1)
		return (0);

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	return (isPrime(n, i + 1));
}
