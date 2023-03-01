#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: integer that specifies the maximum number of characters to copy from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
