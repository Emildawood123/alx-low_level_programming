#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * Return: index or -1
*/

int advanced_binary(int *array, size_t size, int value)
{
static size_t start;
size_t end = size - 1;
size_t mid = (start + end) / 2;
size_t i = start;
if (array == NULL || start > end)
{
start = 0;
return (-1);
}
printf("Searching in array: ");
while (i <= end)
{
if (i == end)
{
printf("%d\n", array[i]);
}
else
{
printf("%d, ", array[i]);
}
i++;
}
if (value == array[mid])
{
start = 0;
return (mid);
}
else if (value > array[mid])
{
start = mid + 1;
}
else
{
end = mid - 1;
}
return (advanced_binary(array, end + 1, value));
}
