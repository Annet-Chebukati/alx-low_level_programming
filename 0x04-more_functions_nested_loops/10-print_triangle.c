`#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: input and prints a triangle with size rows of # characters
 * If size is less than or equal to 0, the function prints only
 * a new line character and returns without doing anything else
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
