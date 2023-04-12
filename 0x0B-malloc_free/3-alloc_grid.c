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
	int **gridt = (int **)malloc((width * height) * (sizeof(int)));

	if (gridt == NULL)
	{
	return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	while (height != 0)
	{
	gridt[height - 1] = (int *)malloc(width * (sizeof(int)));
	if (gridt[height - 1] == NULL)
	{
	return (NULL);
	}
	while (width != 0)
	{
	gridt[height - 1][width - 1] = 0;
	width--;
	}
	height--;
	}
	return (gridt);
}
