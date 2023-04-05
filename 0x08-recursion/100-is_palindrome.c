#include "main.h"
/**
 * is_pal- that is first == last and so
 * @s: that is taken
 * @beg: that is index begining
 * @end: that is lengh of string
 * Return: 1 or 0
 */
int is_pal(char *s, int beg, int end);
int _str(char *s);
int is_pal(char *s, int beg, int end)
{
	if (beg == end || beg == end - 1 || end == 0)
	{
	return (1);
	}
	else if (s[beg] != s[end - 1])
	{
	return (0);
	}
	else
	{
	return (is_pal(s, beg + 1, end - 1));
	}

}
/**
 * _str - that is return length
 * @s: that is string
 * Return: string
 */
int _str(char *s)
{
	if (*s != '\0')
	{
	return (1 + _str(s + 1));
	}
	return (0);
}
/**
 * is_palindrome - that is prog return anthor fun
 * @s: this is a string
 * Return: anthor function
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0, _str(s)));
}
