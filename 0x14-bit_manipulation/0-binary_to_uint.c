#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
int len = 0;
int i = 0;
int pow = 1;
unsigned int dec = 0;
if (b == NULL)
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
pow = pow * 2;
}
len--;
pow = pow / 2;
while (b[i])
{
dec = dec + ((b[i] - '0') * pow);
pow = pow / 2;
i++;
}
return (dec);
}
