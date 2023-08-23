#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords for
 * the program 101-crackme.
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int set[100];
	int i, sum, j;

	sum = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		set[i] = rand() % 78;
		sum += (set[i] + '0');
		putchar(set[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}

