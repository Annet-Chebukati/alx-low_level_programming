#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercae followed by newline
 * Repeats 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}

	_putchar('\n');
}
