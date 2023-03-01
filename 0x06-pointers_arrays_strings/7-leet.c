#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
	char *leet_chars = "AaEeOoTtLl";
	char *leet_nums = "44330771";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	return (str);
}
