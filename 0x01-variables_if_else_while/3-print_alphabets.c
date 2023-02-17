#include <stdio.h>

/**
 * main - Entry point
 *
 * Start with the first letter of the alphabet in lowercase
 * Countinue until the last letter of the aplphabet in lowercase
 * Output the current letter
 * Move to the next letter
 * Start with the first letter of the alphabet in uppercase
 * Countinue until the last letter of the alphabet in uppercase
 * Output the current letter
 * Move to the next letter
 * Otput a newline after all the letters have been printed
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
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
