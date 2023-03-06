#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string of characters to accept
 *
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	char *p = s;

	while (*p != '\0' && strchr(accept, *p) != NULL)
	{
		len++;
		p++;
	}
	return (len);
}
