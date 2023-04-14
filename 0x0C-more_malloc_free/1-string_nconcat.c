#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - taht concat two string
 * @s1: first
 * @s2: second
 * @n: num
 * Return: new stinr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int i, l, a = 0;
	unsigned int len2 = 0;
	char *constr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	l = len1 + n;
	constr = (char *)malloc(sizeof(char) * l + 1);
	if (constr == NULL)
		return (NULL);
	for (i = 0; i < l ; i++)
		if (i <= len1)
			constr[i] = s1[i];
		else if (i >= len1)
		{
		constr[i] = s2[a];
		a++;
		}
		constr[i] = '\0';
	return (constr);
}
