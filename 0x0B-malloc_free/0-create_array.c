#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - that program retrun array
 * @size: size of array
 * @c: conten
 * Return: new content
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}
	while (size != 0)
	{
	ptr[size - 1] = c;
	size--;
	}
	return (ptr);
}
