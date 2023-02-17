#include <stdio.h>

/**
 * main - Entry point
 *
 * Start with the first single digit number in base 10
 * Use integer variable i to represent the number
 * Countinue until the last single digit number
 * Output the current number
 * Move to the next number
 * output a newline after printing all numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i + 0);
		i++;
	}
	putchar('\n');
	return (0);
}
