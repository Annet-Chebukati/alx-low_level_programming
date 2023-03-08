#include "main.h"

/**
 * _sqrt_recursion_helper - perform the binary search using recursion
 * @n: number to find the square root of
 * @low: low end of the search range
 * @high: high end of the search range
 *
 * Return: n, low, mid - 1
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
	{
		return (-1);
	}
	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid < n / mid)
	{

		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_helper(n, 1, n));
}

