#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to the memory area to be filled (s)
 * @b: byte value to fill it with (b)
 * @n: number of bytes to be filled (n)
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}

