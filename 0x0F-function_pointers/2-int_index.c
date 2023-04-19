#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - that is function to check depends on po fu
 * @array: this array
 * @size: length array
 * @cmp: fun used
 * Return: sum
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array != NULL && cmp != NULL)
{
if (size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return(i);
}
}
}
}
return (-1);
}
