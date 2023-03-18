#include <stdio.h>

/**
 *main - that program zero to 9 with ,
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	if (n == 9)
	{
		putchar(n + '0');
	}
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
