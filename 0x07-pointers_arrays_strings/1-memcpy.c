#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: pointer to the destination memory area (dest)
 * @src: pointer to the source memory area (src)
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
	{
		*p++ = *src++;
	}
	return (dest);
}
