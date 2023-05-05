#include "main.h"
#include <stdio.h>
/**
 * flip_bits - ...
 * @n: n
 * @m: m
 * Return: count of we need to transform
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
int c = 0;
unsigned int long curr;
unsigned int long ex = m ^ n;

for (i = 63; i >= 0; i--)
{
curr = ex >> i;
if (curr & 1)
{
c++;
}
}
return (c);
}
