#include <stdio.h>
/**
 * main - that program prints from zero to fifteen
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
