#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - that return covert from bin to dec
 * @b: binary as string
 * Return: dec
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int res = 0;
if (!b)
{
return (0);
}
while (b[i])
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
res = res * 2 + (b[i] - '0');
i++;
}
return (res);
}
