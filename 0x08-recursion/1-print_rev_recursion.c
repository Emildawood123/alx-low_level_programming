#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - that is rev string
 * @s: this is a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
	}
}
