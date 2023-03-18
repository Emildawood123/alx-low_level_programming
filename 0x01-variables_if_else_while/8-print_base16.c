#include <stdio.h>
/**
 * main - that program prints from zero to fifteen
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 16; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');
	return (0);
}
