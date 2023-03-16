#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second string
 * @n: bytes
 *
 * Return: char pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	result = malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
