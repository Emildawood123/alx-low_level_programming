#include "main.h"
/**
 * puts2 - that program prints even numbers
 * @str: that are collections of numbers
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len])
	{
	if (len % 2 == 0)
	{
	_putchar(str[len]);
	len++;
	}
	else
	{
	len++;
	}
	}
	_putchar('\n');
}
