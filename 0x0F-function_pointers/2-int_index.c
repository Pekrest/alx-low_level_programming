#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: array
 * @size: array no. of elements size
 * @cmp: pointer to function to compare values
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
