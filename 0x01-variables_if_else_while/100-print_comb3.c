#include <stdio.h>
/**
 *main - that app count form one to eighty without and etc
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
	if (n > 10 && n / 10 + '0' > n % 10 + '0')
	{
		continue;
	}
	else
	{
	putchar(n < 10 ? '0' : n / 10 + '0');
	putchar(n < 10 ? n : n % 10 + '0');
	if (n != 89)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
