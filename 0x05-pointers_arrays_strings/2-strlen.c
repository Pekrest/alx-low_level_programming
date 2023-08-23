#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: string
 *
 * Return: s_len
 */
int _strlen(char *s)
{
	int s_len = 0;

	while (*s != '\0')
	{
		s_len++;
		s++;
	}
	return (s_len);
}
