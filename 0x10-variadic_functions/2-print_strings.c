#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a \n
 *
 * @separator: input string to be printed btw strings
 * @n: int input
 * @...: input parameters to cal. sum
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list archar;
	char *strn;
	unsigned int x;

	va_start(archar, n);
	for (x = 0; x < n; x++)
	{
		strn = va_arg(archar, char *);
		if (strn == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strn);
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(archar);
}
