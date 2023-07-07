#include <stdio.h>
#include "main.h"
/**
 * set_bit - that funcation return after set
 * @n: number
 * @index: index
 * Return: after
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (*n) | (1 << index);
return (*n);
}
