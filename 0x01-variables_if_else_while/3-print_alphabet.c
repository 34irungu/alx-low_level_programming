#include <stdio.h>
/**
 * main - prints alphabets in lower and uppercase
 *
 * Return: 0.
 */
int main(void)
{
	char c;
	char h;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (h = 'A'; h <= 'Z'; h++)
	{
       		putchar(h);
        }
	
	putchar('\n');
	return (0);
}
