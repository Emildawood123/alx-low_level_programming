#include "main.h"
/**
 * print_times_table - that program make a table
 * @n: that parameter to knowing column and rows
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
	if (n > 15 || n < 0)
	{
	break;
	}
	else
	{
	for (j = 0; j <= n; j++)
	{
	int res = i * j;

	if (j == 0)
	{
	_putchar(res + '0');
	_putchar(n == 0 ? '\n\n' : res + ',');
	}
	else
	{
	_putchar(' ');
	_putchar(res < 100 ? ' ' : res / 100 + '0');
	_putchar(res < 10 ? ' ' : res >= 10 && res < 100 ? res / 10 + '0'
: (res / 10) % 10 + '0');
	_putchar(res < 10 ? res + '0' : res % 10 + '0');
	if (j != n)
	{
	_putchar(',');
	}
	}
	}
	}
	_putchar('\n');
	}
}
