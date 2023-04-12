#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - that app return string
 * @str: string
 * Return: new string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *nestr;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i] != '\0')
	{
	i++;
	}
	nestr = (char *)malloc(i + 1);
	if (nestr == NULL)
	{
	return (NULL);
	}
	while (i != 0)
	{
	nestr[i - 1] = str[i - 1];
	i--;
	}
	return (nestr);
}
