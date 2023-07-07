#include <stdio.h>
#include "main.h"
/**
 * get_bit - that funcation return index of bina..
 * @n: binary number
 * @index: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int new;
if (n == 0)
{
return (-1);
}
new = (n >> (index)) & 1;
return (new);
}
