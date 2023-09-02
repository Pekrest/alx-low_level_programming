#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: Input string
 *
 * Return: s (success)
 *
 */
char *rot13(char *s)
{
	int a, b;

	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == str1[b])
			{
				s[a] = str2[b];
				break;
			}
		}
	}
	return (s);
}
