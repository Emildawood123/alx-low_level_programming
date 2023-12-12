#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * Return: index or -1
*/
int jump_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = sqrt(size);
size_t i;
if (array == NULL)
{
return (-1);
}
while (end < size)
{
printf("Value checked array[%ld] = [%d]\n", start, array[start]);
if (value >= array[start] && value <= array[end])
{
printf("Value found between indexes [%ld] and [%ld]\n", start, end);
for (i = start; i <= end; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (array[i]);
}
}
}
start += sqrt(size);
end += sqrt(size);
}
printf("Value found between indexes [%ld] and [%ld]\n", start, end);
printf("Value checked array[%ld] = [%d]\n", start, array[start]);
return (-1);
}
