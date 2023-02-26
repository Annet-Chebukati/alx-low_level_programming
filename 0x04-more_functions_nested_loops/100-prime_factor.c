#include <stdio.h>

/**
 * main - entery point
 * program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime_factor = 2;

	while (num > largest_prime_factor)
	{
		if (num % largest_prime_factor == 0)
		{
			num /= largest_prime_factor;
			largest_prime_factor = 2;
		}
		else
		{
			largest_prime_factor++;
		}
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}

