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
size_t start = 0;
size_t end = size - 1;
size_t mid = end / 2;
if (array == NULL)
{
return (-1);
}
mid = start + ((value - array[start]) * (end - start) /
(array[end] - array[start]));
if (mid > size)
{
printf("checked array[%ld] is out of range\n", mid);
return (-1);
}
while (array[start] != array[end] && value >= array[start]
&& value <= array[end])
{
mid = start + ((value - array[start]) * (end - start) /
(array[end] - array[start]));
printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
start = mid + 1;
}
else
{
end = mid - 1;
}
}
return (-1);
}
