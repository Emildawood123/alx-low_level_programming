#include "main.h"
/**
 * print_last_digit - that return last number in you digit
 * @c: that is digit
 * Return: On succes 1
 */
int print_last_digit(int c)
{
	int a = c % 10;

	if (a < 0)
	{
	a = a * -1;
	}
	_putchar(a + '0');

	return (a);
}
