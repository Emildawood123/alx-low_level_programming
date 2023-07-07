#include <stdio.h>
#include "main.h"
/**
 * clear_bit - that function return 1 or 0
 * @n: number
 * @index: index
 * Return: 0 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i, num = 1;
if (index > 63)
{
return (-1);
}
for (i = 0; i < index; i++)
{
num = num * 2;
}
if (*n & (1 << index))
{
*n = *n - num;
}
return (1);
}
