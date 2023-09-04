#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * returns 1 if c is uppercase otherwise return 0
 *                                               * @c: Char in ASCII code
 *
 * Return: 1 if uppercase. otherwise return 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
