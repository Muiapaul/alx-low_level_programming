#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: the number to be checked
 * Return: Always 1 (Success) for positive num,-1 for negative num else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

