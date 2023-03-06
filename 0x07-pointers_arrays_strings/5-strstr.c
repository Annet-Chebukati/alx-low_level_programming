#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: haystack if substring is found, if not found
 * return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
