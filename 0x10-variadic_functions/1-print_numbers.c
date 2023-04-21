#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - that program print number bet them sep
 * @separator: separator
 * @n: sum of numbers
 * Result: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(arg);
va_start(arg, n);
if (separator == NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
}
}
else
{
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", va_arg(arg, int));
}
else
{
printf("%s%d", separator, va_arg(arg, int));
}
}
}
printf("\n");
}
