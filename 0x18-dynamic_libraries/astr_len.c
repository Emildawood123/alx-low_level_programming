#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
int c = 0;
while (s[c])
{
c++;
}
return (c);
}
