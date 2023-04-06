#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}

