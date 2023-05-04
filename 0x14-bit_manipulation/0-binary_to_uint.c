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

while (b[i])
{
if (b[i] < 48 || b[i] > 49)
{
return (0);
}
res = 2 * res + (b[i] - '0');
i++;
}
return (res);
}
