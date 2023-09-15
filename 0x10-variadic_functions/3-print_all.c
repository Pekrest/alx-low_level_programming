#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 *
 * @format: list of arg passed
 * @...: input variable of no. to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *strn, *diff = "";
	int x = 0;
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", diff, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", diff, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", diff, va_arg(list, double));
					break;
				case 's':
					strn = va_arg(list, char *);
					if (!strn)
						strn = "(nil)";
					printf("%s%s", diff, strn);
					break;
				default:
					x++;
					continue;
			}
			diff = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
