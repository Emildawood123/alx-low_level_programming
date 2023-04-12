#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - that app make grid
 * @width: width
 * @height: height
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i, t;
	int **gridt;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	gridt = malloc(height * sizeof(int *));
	if (gridt == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	gridt[i] = (int *)malloc(width * (sizeof(int)));
	if (gridt[i] == NULL)
	{
	for (; i >= 0; i--)
	{
	free(gridt[i]);
	}
	free(gridt);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (t = 0; t < width; t++)
	{
	gridt[i][t] = 0;
	}
	}
	return (gridt);
}
