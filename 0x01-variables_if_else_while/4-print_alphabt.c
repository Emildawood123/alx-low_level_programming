#include <stdio.h>
/**
 * main - that program print all lower without q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')
	{
		continue;
	}
	else
	{
		putchar(c);
	}
	}
	putchar('\n');
	return (0);
}

