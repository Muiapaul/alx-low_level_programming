#include "main.h"
int actual_prime_number(int n, int i);
/**
 * is_prime_number - returns 1 if the input int is a prime number, otherwise 0
 * @n: input
 * Return: Always 1 if input is prime number (Success) otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number -calculates if number is prime recursively
 * @n: number
 * @i: iterator
 * Return: Always 1 if input is prime number (Success) otherwise return 0
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, i - 1));
}
