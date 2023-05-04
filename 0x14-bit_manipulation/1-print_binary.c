#include <stdio.h>
#include "main.h"
/**
 *
 */
void print_binary(unsigned long int n)
{
int i, c = 0;
unsigned long int curr;
for (i = 63; i >= 0; i--)
{
curr = n >> i;
if (curr & 1)
{
_putchar('1');
c++;
}
else if (c)
{
_putchar('0');
}
}
if (!c)
{
_putchar('0');
}
}
