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
		putchar(n + '0');
	if (n == 9)
	{
		continue;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
