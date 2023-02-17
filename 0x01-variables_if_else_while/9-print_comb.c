#include <stdio.h>

/**
 * main - Entry point
 *
 * Use variable i and j to represent digits to print
 * Outer for loop iterates over i from 0 to 9
 * Inner for loop iterates over j from i t0 9
 * Print current digits as characters
 * Add comma and space between the digits unless its the last combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		
	}

	putchar('\n');

	return (0);
}
