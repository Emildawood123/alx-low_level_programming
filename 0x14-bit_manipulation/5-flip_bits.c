#include <stdio.h>
#include "main.h"
/**
 * flip_bits - that function return oppsite
 * @n: number
 * @m: sec num
 * Return: ones in new number after xor
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned int count = 0;
unsigned long int new = n ^ m;
for (i = 0; i <= 31; i++)
{
if (new & (1 << i))
{
count++;
}
}
return (count);
}
