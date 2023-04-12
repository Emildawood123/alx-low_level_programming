#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - that program concat two strings
 * @s1: 1st
 * @s2: 2nd
 * Return: after concat
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *new;

	if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[j] != '\0')
	{
	j++;
	}
	new = (char *)malloc(j + i + 2);
	if (new == NULL)
	{
	return (NULL);
	}
	while (j != 0)
	{
	new[i + j - 1] = s2[j - 1];
	j--;
	}
	while (i != 0)
	{
	new[i - 1] = s1[i - 1];
	i--;
	}
	return (new);

}
