#include <stdio.h>

/**
 * main - Entry point
 *
 * Use variable i, k and j to represent digits to print
 * Outer for loop iterates over i from 0 to 8
 * inner for loop runsfrom i + 1 t0 9
 * the next for loop runns from t0 10
 * Print current digits as characters
 * Add comma and space between the digits where necessary
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
