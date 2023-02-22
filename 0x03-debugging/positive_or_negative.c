#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - prints positive or negative number
 *
 * seed the random number generator with the current time
 * @i: random number i
 * print i, if it's > 0 print is positive
 * if it's equal to 0 print is zero
 * if it's < 0 print is negative
 *
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	printf("%d ", i);
	if (i > 0)
	{
		printf("is positive\n");
	}
	else if (i == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
}
