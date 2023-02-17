#include <stdio.h>

/**
 * main - Entry point
 *
 * Start with the first single digit number in base 16
 * Countinue until the last single digit number
 * Output the current number
 * Move to the next number
 * output a newline after printing all numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
