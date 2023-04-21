#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - that is a program return sum
 * @n: sum of number wanted
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list(arg);

if (n == 0)
{
return (0);
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(arg, int);
}
return (sum);
}
