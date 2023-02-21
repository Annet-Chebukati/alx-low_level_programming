#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: single letter input
 * Return: 1, indicating that the character is alphabetic else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
