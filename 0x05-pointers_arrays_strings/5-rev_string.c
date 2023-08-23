#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 * @s: string
 *
 * Return: reverse string
 */
void rev_string(char *s)
{
	char s_rev = s[0];
	int s_len = 0;
	int i;

	while (s[s_len] != '\0')
	s_len++;
	for (i = 0; i < s_len; i++)
	{
		s_len--;
		s_rev = s[i];
		s[i] = s[s_len];
		s[s_len] = s_rev;
	}
}

