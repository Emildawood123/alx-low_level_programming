#include <stdio.h>
#include "main.h"
/**
 *get_endianness - that return 1 or 0
 *Return: 1 or 0
 */
int get_endianness(void)
{
	int e = 1;
	char *ch;
	int new;

	ch = (char *) &e;
	printf("%s", ch);
	new = (int) *ch;
	return (new);
}
