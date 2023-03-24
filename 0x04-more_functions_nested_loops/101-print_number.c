#include "main.h"
/**
 * print_number - print number
 * @n: that is number
 * Return: void
 */
void print_number(int n)
{
	int k = n;
	if (n < 0)
	{
	n = n * -1;
	k = n;
	_putchar('-');
	}
	k/= 10;
	if (k != 0)
	{
	print_number(k);
	_putchar(n % 10 + '0');
	}

}
