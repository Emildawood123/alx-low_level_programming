#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * Return: index or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t pos = low + (((double)(high - low) /
(array[high] - array[low])) * (value - array[low]));
if (array == NULL)
{
return (-1);
}
pos = low + ((value - array[low]) * (high - low) /
(array[high] - array[low]));
if (pos > size)
{
printf("checked array[%ld] is out of range\n", pos);
return (-1);
}
while (array[low] != array[high] && value >= array[low]
&& value <= array[high])
{
pos = low + ((value - array[low]) * (high - low) /
(array[high] - array[low]));
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
{
return (pos);
}
else if (array[pos] < value)
{
low = pos + 1;
}
else
{
high = pos - 1;
}
}
return (-1);
}
