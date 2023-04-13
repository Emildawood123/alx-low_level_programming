#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	int i = 0;
	int len2 = 0;
	char *constr;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2])
	{
	len2++;
	}
	constr = (char *)malloc(n + len1 + 1);
	if (constr == NULL)
	{
	return (NULL);
	}
	while (s1[i] != '\0')
	{
	constr[i] = s1[i];
	i++;
	}
	for (i = 0; n != 0; i++)
	{
	constr[len1 + 1] = s2[i];
	n--;
	len1++;
	}

	return (constr);
}
