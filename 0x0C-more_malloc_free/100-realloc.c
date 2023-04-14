#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - not enough
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return:new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *pointer;

	if (old_size == new_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	pointer = malloc(new_size);
	if (pointer == NULL)
	{
	return (NULL);
	}
	return (pointer);
	}
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
	{
	return (pointer);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
	pointer[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (pointer);
}
