#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * seed the random number generator with the current time
 * generate a random number n
 * calculate last digit of n
 * print n, if last digit of n is > 5
 * print and is greater than 5
 * else if it's equal to 0 print and is zero
 * else print and is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is ", n);
	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
