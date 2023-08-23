#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: first int to swap
 * @b: second int to swap
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
