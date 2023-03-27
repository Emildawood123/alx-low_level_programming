#include "main.h"
/**
 * puts_half - that prints second half of the sentence
 * @str: this is a sentence
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int beg;

	while (str[len])
	{
	len++;
	}
	for (beg = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1; beg < len; beg++)
	{
	_putchar(str[beg]);
	}
	_putchar('\n');
}
