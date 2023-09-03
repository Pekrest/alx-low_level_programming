#include "main.h"
/**
 * main_prime_number - to find if int is a prime.
 *
 * @x: int input
 * @y: iterator
 *
 * Return: 1 if prime, otherwise return 0
 *
 */
int main_prime_number(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (main_prime_number(x, y - 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: int input
 *
 * Return: 1 if prime number, otherwise return 0.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_number(n, n - 1));
}
