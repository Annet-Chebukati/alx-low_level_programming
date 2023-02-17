#include <stdio.h>

/**
 * main - Entry point
 *
 * Outer loop iterates over all the possible first numbers
 * Inner loop iterates over all possible second numbers
 * Putchar function prints each digit of the two numbers,
 * as well as separating space and commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
