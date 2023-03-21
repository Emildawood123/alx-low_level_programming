#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - that function return alphabet lowercase
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char i;
for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
