#include "main.h"
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string
 *
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int i, j, k, s_len, l, digit;

	i = 0;
	j = 0;
	k = 0;
	s_len = 0;
	l = 0;
	digit = 0;

	while (s[s_len] != '\0')
		s_len++;
	while (i < s_len && l == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - 48;
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}
