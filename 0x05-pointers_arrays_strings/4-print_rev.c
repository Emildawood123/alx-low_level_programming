#include "main.h"
/**
 * print_rev - that program you can write string reverse
 * @s: that is string
 * Return:void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	for (length = length; length >=  0; length--)
	{
		_putchar(s[length]);
	}
		_putchar('\n');
}
