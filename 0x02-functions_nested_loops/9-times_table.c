#include "main.h"
/**
 * times_table - that program make table
 * Return: ***
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	int new = i * j;

	if (j == 0)
	{
	_putchar(new + '0');
	_putchar(',');
	}
	else
	{
	_putchar(' ');
	_putchar(new < 10 ? ' ' : new / 10 + '0');
	_putchar(new < 10 ? new + '0' : new % 10 + '0');
	if (j != 9)
	{
	_putchar(',');
	}
	}
	}
	_putchar('\n');
}

}
