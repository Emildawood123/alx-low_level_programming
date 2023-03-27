#include "main.h"
/**
 * rev_string - that program make the sentence is reverse
 * @s: that stentence
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	{
	len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
