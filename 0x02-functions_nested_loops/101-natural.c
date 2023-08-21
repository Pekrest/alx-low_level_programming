/*
 * File: 101-natural.c
 * Auth: vincent kip
 */
#include <stdio.h>
/**
 * main - A Lists of all the natural number
 * below 1024.
 * that are multiples of 3 or 5
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n, sum  = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
