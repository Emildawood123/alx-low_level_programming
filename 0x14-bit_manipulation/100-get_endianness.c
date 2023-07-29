#include <stdio.h>
#include "main.h"
/**
 *get_endianness - that return 1 or 0
 *Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *ch;

	ch = (char *) &e;
	return (*ch);
}
