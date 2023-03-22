#include "main.h"

/**
 * print_sign - that return - or + or zero
 * @n: this parameter to know is minus of right
 * Return: On success
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
