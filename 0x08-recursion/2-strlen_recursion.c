#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: string
 *
 * Return: length of string (success)
 */
int _strlen_recursion(char *s)
{
	int lgth = 0;

	if (*s)
	{
		lgth++;
		lgth += _strlen_recursion(s + 1);
	}

	return (lgth);
}
