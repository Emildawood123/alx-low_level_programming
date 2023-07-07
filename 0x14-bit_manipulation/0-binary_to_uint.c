#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - that funcation convert binary to dec
 * @b: that is a parameter given binary number
 * Return: dec
 */
unsigned int binary_to_uint(const char *b)
{
unsigned  int len = 0;
unsigned int i = 0;
unsigned int f;
long int pow = 1;
unsigned long int dec = 0;
if (!b)
{
return (0);
}
while (b[len])
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
len++;
}
for (f = 0; f < len - 1; f++)
{
pow = pow  * 2;
}
while (b[i])
{
dec = dec + ((b[i] - '0') * pow);
pow = pow / 2;
i++;
}
return (dec);
}
