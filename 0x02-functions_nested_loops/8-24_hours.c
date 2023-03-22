#include "main.h"
/**
 * jack_bauer - that program ticktock day
 * Return: ***
 */
void jack_bauer(void)
{
	int i;
	int j;
for (i = 0; i < 24; i++)
	{
	for (j = 0; j < 60; j++)
	{
	_putchar(i < 10 ? '0' : i / 10 + '0');
	_putchar(i < 10 ? i + '0' : i % 10 + '0');
	_putchar(':');
	_putchar(j < 10 ? '0' : j / 10 + '0');
	_putchar(j < 10 ? j + '0' : j % 10 + '0');
	_putchar('\n');
	}
	}
}
