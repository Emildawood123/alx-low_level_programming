#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name deband on paras
 * @name: nam
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
if (f != NULL)
{
f(name);
}
}
}
