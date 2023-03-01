#include "main.h"

/**
 * _strncat -  function that concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: source string
 * @dest: destination string
 * @n: integer that specifies the maximum number of bytes to copy from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';

	return (dest);
}
