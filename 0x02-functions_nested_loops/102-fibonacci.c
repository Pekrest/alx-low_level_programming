#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2 followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int cn;
	unsigned long f1 = 0, f2 = 1, sum;

	for (cn = 0; cn < 50; cn++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (cn == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

