#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make
  * change for an amount of money
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, twopences, pennies, total_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;
	dimes = (cents % 25) / 10;
	nickels = ((cents % 25) % 10) / 5;
	twopences = (((cents % 25) % 10) % 5) / 2;
	pennies = (((cents % 25) % 10) % 5) % 2;
	total_coins = quarters + dimes + nickels + twopences + pennies;

	printf("%d\n", total_coins);
	return (0);
}
