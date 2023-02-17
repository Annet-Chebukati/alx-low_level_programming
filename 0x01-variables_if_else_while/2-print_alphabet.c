#include <stdio.h>

/**
 * main - Entry point
 *
 * Start with the first letter of the alphabet
 * Countinue until the last letter of the aplphabet
 * Output the current letter
 * Move to the next letter
 * Otput a newline after all the letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
