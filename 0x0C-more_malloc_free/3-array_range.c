#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - taht program to min to max
 * @min: from
 * @max: to
 * Return: coll of int
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *newarr = 0;

	if (min > max)
	{
	return (NULL);
	}
	newarr = malloc(((max - min) * sizeof(int)) + sizeof(int));
	if (newarr == NULL)
	{
	return (NULL);
	}
	while (min <= max)
	{
	newarr[i] = min;
	i++;
	min++;
	}
	return (newarr);
}
