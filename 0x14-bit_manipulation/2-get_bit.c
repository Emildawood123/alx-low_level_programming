#include "main.h"
#include <stdio.h>
/**
 * get_bit - that return index of binery
 * @n: number berfore coverted
 * @index: index is wanted
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
int c = 0;
unsigned int long curr;
unsigned int trav = 0;
int i;
char bin[64];
for (i = 63; i >= 0; i--)
{
curr = n >> i;
if (curr & 1)
{
bin[i] = '1';
c++;
}
else if (c)
{
bin[i] = '0';
}
}
if (!c)
{
bin[i] = '0';
}
if (index > 63)
{
return (-1);
}
while (trav != index)
{
trav++;
}
return ((bin[trav] - '0'));
}
