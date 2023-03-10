#include "main.h"
#include <stdio.h>

/**
  * main - Prints its name
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');

	return (0);
}
