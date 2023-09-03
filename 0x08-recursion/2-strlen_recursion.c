#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string to be measured
 *
 * Return: len (success)
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

