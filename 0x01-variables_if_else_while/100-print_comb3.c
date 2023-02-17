#include <stdio.h>

/**
 * main - Entry point
 *
 * Use variable i and j to represent digits to print
 * Outer for loop iterates over i from 0 to 8
 * inner for loop runsfrom i + 1 t0 9
 * Print current digits as characters
 * Add comma and space between the digits if the first digit is less than 8
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
