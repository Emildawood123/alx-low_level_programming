#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - that funcation return index of bina..
 * @n: binary number
 * @index: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (n == 0)
{
return (-1);
}
int new = (n >> (index)) & 1;
return (new);
}
