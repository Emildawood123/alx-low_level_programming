#include <stdio.h>

/**
 * main - that program print from 0 to 89
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
for (n = 0; n < 90; n++)
	{
	if (n < 10)
	{
		putchar('0');
	}
	putchar(n / 10 + '0');
	if (n > 10)
	{
		putchar(n % 10 + '0');
	}
	if (n != 89)
	{
		putchar(',');
	}
	}
	return (0);
}
