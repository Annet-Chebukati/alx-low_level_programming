#include <stdio.h>

/**
 * main - Entry point
 *
 * Start with the last letter of the alphabet
 * Countinue as long as you havent reached a
 * Output the current letter
 * Move to the next letter
 * Otput a newline after all the letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
