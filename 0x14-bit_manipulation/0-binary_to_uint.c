#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int result = 0;
	unsigned int i;
	char c;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		c = b[i];
		if (c == '0')
		{
			result <<= 1;
		}
		else if (c == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
