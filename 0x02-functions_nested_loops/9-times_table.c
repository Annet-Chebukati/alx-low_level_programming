#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * i = row, j = column, result = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			result = (i * j);

			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');

			if (i <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
