#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: a input
 * @size: size input
 *
 * Return: 0 (success)
 *
 */
void print_diagsums(int *a, int size)
{
	int pri_sum, sec_sum, i;

	pri_sum  = 0;
	sec_sum = 0;

	for (i = 0; i < size; i++)
	{
		pri_sum = pri_sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sec_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", pri_sum, sec_sum);
}

