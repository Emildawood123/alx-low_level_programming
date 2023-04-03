#include "main.h"
/**
 * _strchr - that program begin from char c
 * @s: string
 * @c: char is begined
 * Return: afters
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	i++;
	}
	return (s);
}
