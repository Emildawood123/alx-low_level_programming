#include "main.h"
/**
 * _puts - that print withot printf
 * @str: this is a string
 * Return: void
 */
void _puts(char *s)
{
	while (*s)
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
