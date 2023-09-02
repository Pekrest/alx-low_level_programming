#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: s input
 *
 * Return: s (success)
 */
char *leet(char *s)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == str1[b])
			{
				s[a] = str2[b];
			}
		}
	}
	return (s);
}
