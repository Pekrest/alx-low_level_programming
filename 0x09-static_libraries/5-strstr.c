#include "main.h"
/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: haystack input
 * @needle: needle input
 *
 * Return: 0 (success)
 *
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

