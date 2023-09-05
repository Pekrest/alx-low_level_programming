#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by \n
 * @argc: int input (argument count)
 * @argv: array of char ( argument vector)
 *
 * Return: 0 (success)
 *
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
