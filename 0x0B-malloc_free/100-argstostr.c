#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - that converts args to string
 * @ac: words length
 * @av: save words
 * Return:c
 */
char *argstostr(int ac, char **av)
{
	int i, y;
	int x = 0;
	int length;
	char *new;

	new = (char *)malloc(ac);
	if (new == NULL)
	{
	return (NULL);
	}
	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (y = 0; av[i][y]; y++)
	{
	length++;
	}
	}
	length = length + ac;
	new = (char *)malloc(length + 1);
	for (i = 0; i < ac; i++)
	{
	for (y = 0; av[i][y]; y++)
	{
	new[x] = av[i][y];
	x++;
	}
	if (new[x] == '\0')
	{
	new[x++] = '\n';
	}
	}
	return (new);
}
