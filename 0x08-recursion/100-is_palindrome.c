#include "main.h"
/**
 * str_lgth_recursion - to find length of string
 *
 * @s: s input
 *
 * Return: lgth of string
 *
 */
int str_lgth_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_lgth_recursion(s + 1));
}

/**
 * fnd_palindrome - to find char recursively for palindrome
 * @s: s input
 * @lgth: length of str
 * @y: iterator
 *
 * Return: return 1 if pal. otherwise return 0
 */
int fnd_palindrome(char *s, int lgth, int y)
{
	if (*(s + y) != *(s + lgth - 1))
		return (0);
	if (y >= lgth)
		return (1);
	return (fnd_palindrome(s, y + 1, lgth - 1));
}

/**
 * is_palindrome - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 *
 * @s: s input
 *
 * Return: 1 if string is identical, otherwise return 0
 *
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (fnd_palindrome(s, 0, str_lgth_recursion(s)));
}
