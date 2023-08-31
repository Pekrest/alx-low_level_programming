#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to cap
 * Return: 0 (success)
 */
char *cap_string(char *str)
{
	int a = 0;

	while (str[a])
	{
		while (!(str[a] >= 97 && str[a] <= 122))
			a++;

		if (str[a - 1] == ' ' ||
		    str[a - 1] == '\t' ||
		    str[a - 1] == '\n' ||
		    str[a - 1] == ',' ||
		    str[a - 1] == ';' ||
		    str[a - 1] == '.' ||
		    str[a - 1] == '!' ||
		    str[a - 1] == '?' ||
		    str[a - 1] == '"' ||
		    str[a - 1] == '(' ||
		    str[a - 1] == ')' ||
		    str[a - 1] == '{' ||
		    str[a - 1] == '}' ||
		    a == 0)
			str[a] -= 32;

		a++;
	}

	return (str);
}

