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
	int diff = max - min;
	int *newarr;

	if (min > max)
	{
	return (NULL);
	}
	newarr = (int *)malloc(diff * sizeof(int) + sizeof(int));
	if (newarr == NULL)
	{
	return (NULL);
	}
	for (i = min; i <= max; i++)
	{
	newarr[i] = i;
	}
	return (newarr);
	
}
