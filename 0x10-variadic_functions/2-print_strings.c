#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - that programs prints strings with sep
 * @separator: separator
 * @n: sum of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(arg);
char *ptr;
va_start(arg, n);
for (i = 0; i < n; i++)
{
ptr = (char*)va_arg(arg, char *);
if (ptr == NULL)
{
ptr = "(nil)";
}
if (i == 0)
{
printf("%s", ptr);
}
else
{
if (separator == NULL)
{
printf("%s", ptr);
}
else
{
printf("%s%s", separator, ptr);
}
}
}
printf("\n");
}
