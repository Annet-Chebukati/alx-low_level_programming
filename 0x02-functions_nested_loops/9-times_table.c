#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * i = row, j = column, result = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
	}
	_putchar('$');
	_putchar('\n');
}
