#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - that is program return pointer
 * @nmemb: num
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int len = 0;
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	len = nmemb * size;
	p = malloc(len);
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	p[i] = 0;
	}
	return (p);
}
