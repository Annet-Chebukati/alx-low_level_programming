#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;
	int i;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

