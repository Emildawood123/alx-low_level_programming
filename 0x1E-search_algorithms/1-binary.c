#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;
size_t mid;
size_t i;
mid = size % 2 == 0 ? (size / 2) - 1 : size / 2;
while (start <= end)
{
printf("Searching in array: ");
for (i = start; i <= end; i++)
{
if (i == end)
{
printf("%d\n", array[i]);
}
else
{
printf("%d, ", array[i]);
}
}
if (array[mid] == value)
{
return (array[mid]);
}
else if (array[mid] < value)
{
start = mid + 1;
mid = (start + end) / 2;
}
else
{
end = mid - 1;
mid = (start + end) / 2;
}
}
return (-1);
}
