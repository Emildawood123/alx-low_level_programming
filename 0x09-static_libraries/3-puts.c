#include "main.h"
/**
 * _puts - that print withot printf
 * @str: this is a string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
