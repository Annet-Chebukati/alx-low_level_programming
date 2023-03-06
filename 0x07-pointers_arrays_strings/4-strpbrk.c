#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string of characters to accept
 *
 * Return: s if byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
