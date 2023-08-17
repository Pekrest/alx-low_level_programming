#include "main.h"
/**
 * _isalpha - a function that checks for alpabetic character.
 * and returns c if 1 otherwise returns 0
 * @c: Char in ASCII code
 *
 * Return: 1 if lowercase. otherwise return 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
