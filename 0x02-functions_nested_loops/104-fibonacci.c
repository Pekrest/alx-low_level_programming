#include <stdio.h>
/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	unsigned long int n;
	unsigned long int a = 1;
	unsigned long int i = 2;
	unsigned long int m = 1000000000;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int i1;
	unsigned long int i2;

	printf("%lu", a);
	for (n = 1; n < 91; n++)
	{
		printf(", %lu", i);
		i += a;
		a = i - a;
	}
	a1 = (a / m);
	a2 = (a % m);
	i1 = (i / m);
	i2 = (i % m);
	for (n = 92; n < 99; ++n)
	{
		printf(", %lu", i1 + (i2 / m));
		printf("%lu", i2 % m);
		i1 = i1 + a1;
		a1 = i1 - a1;
		i2 = i2 + a2;
		a2 = i2 - a2;
	}
	printf("\n");
	return (0);
}

