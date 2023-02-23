#include "main.h"

/**
 * print_numbers - prints alphabet in lowercae followed by newline
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

