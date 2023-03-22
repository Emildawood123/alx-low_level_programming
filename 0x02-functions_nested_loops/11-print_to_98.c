#include "main.h"
/**
 * print_to_98 - that program return to 98
 * @n: the beginning
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
	for (i = n; i >= 98; i--)
	{
		if (i != n)
		{
		_putchar(' ');
		}
		if (i < 10)
		{
		_putchar(i + '0');
		}
		else if (i >= 10 && i < 100)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
		else
		{
		_putchar(i / 100 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
		}
		if (i != 98)
		{
		_putchar(',');
		}
	}
	}
	else 
	{
	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
		_putchar(' ');
		}
		if (i < 10 && i >= 0)
		{
		_putchar(i + '0');
		}
		else if (i < 0)
		{
		_putchar('-');
		_putchar(i <= -10 ? i * -1 / 10 + '0': i * -1 + '0');
		if (i <= -10)
		{
		_putchar(i * -1 % 10 + '0');
		}
		}
                else if (i >= 10 && i < 100)
                {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
		}
		else
		{
		_putchar(i / 100 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
		}
		if (i != 98)
		{
                _putchar(',');
		}
	}
	}
		_putchar('\n');
}
