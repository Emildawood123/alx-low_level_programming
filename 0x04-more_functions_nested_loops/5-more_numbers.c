#include "main.h"
/**
 * more_numbers - that prints 0 to 14 for 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		_putchar(j < 10 ? j + '0' : j / 10 + '0');
		if (j >= 10)
		{
		_putchar(j % 10 + '0');
		}
		}
		_putchar('\n');
	}
}
