#include <stdio.h>
#include "main.h"
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *) &x;
	return ((int) *c);
}
