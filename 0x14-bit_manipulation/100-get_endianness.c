#include <stdio.h>
#include "main.h"
/**
 * get_endianness - give if works or no
 * Return: 0 or 1
 */
int get_endianness(void)
{
int i = 1;
char *c = (char *) &i;
return (*c);
}
