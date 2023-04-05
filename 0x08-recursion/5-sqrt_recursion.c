#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: the number whose square root is to be returned.
 * Return: Always natural square root of n (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion -recurses to find natural square root of a number
 * @n: number
 * @i: iterator
 * Return: Always square root (Success)
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
