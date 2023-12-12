#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - that function find the number by linear algo
 * @array: array
 * @size: size of array
 * @value: the number which we find it
 * Return: the index
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
if (array[i] == value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
return (i);
}
else
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
}
return (-1);
}
