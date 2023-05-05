#include "main.h"
#include <stdio.h>
/**
 * clear_bit - that return number after mani..
 * @n: n
 * @index: index
 * Return: number after
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
