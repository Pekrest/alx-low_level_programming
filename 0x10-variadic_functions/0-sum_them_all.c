#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: int input
 * @...: input parameters to cal. sum
 *
 * Return: 0 if n is equal zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int x, sum = 0;

	va_start(val, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(val, int);
	va_end(val);
	}
	return (sum);
}
