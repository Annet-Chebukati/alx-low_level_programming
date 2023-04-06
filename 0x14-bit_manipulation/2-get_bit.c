#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: value of the bit at index index or -1 if an error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			return ((n & 1) ? 1 : 0);
		}
		n >>= 1;
		comp_i++;
	}
	if (index > comp_i && index < sizeof(unsigned long int) * 8)
	{
		return (0);
	}
	return (-1);
}

