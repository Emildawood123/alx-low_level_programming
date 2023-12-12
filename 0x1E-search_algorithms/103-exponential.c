#include <stdio.h>
#include "search_algos.h"
/**
 * exponential_search - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * Return: index or -1
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t new;
if (array == NULL)
{
return (-1);
}
while (bound < size && array[bound] < value)
{
printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
bound *= 2;
new = bound + 1 > size ? size : bound + 1;
}
printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, new - 1);
return (binary(array, bound / 2, new, value));
}
/**
 * binary - that function return index by binary algo
 * @array: array
 * @size: size of array
 * @value: value
 * @bo: bound
 * Return: index or -1
*/
int binary(int *array, size_t bo, size_t size, int value)
{
size_t start = bo;
size_t end = size - 1;
size_t mid = end / 2;
size_t i;
if (array == NULL)
{
return (-1);
}
while (start <= end)
{
if (array[mid] == value)
{
return (mid);
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

}
return (-1);
}
