#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * and returns c if 1 otherwise returns 0
 *
 * @c: Char in ASCII code
 *
 * Return: 1 if lowercase. otherwise return 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
