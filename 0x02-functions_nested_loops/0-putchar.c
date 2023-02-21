#include "main.h"

/**
 * main - Entry point
 *
 * Prints _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
