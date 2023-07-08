#include <stdio.h>
#include "main.h"
int get_endianness(void)
{
	unsigned int e = 2;
	char *ch;
	int new;

	ch = (char *) &e;
	printf("%s", ch);
	new = (int) *ch;
	return (new);
}
