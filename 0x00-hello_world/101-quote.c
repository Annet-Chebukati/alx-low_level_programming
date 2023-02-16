#include <unistd.h>

/**
 * main - Entry point
 *
 * Prints required text to the standard error
 *
 * Return: 1 to indicate ana error occured
 */
int main(void)
{
	const char message[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
