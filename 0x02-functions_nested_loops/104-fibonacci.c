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
	unsigned long i;
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int next_f;

	printf("%lu, %lu, ", f1, f2);
	for (int i = 3; i <= 98; i++)
	{
		next_f = f1 + f2;
		printf("%lu", next_f);
	if (i != 98)
	{
		printf(", ");
	}
	f1 = f2;
	f2 = next_f;
	}
	printf("\n");
	return (0);
}
