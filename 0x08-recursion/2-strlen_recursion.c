#include "main.h"
/**
 * _strlen_recursion -returns the length of a string.
 * @s: string
 *Return: Always length ofstring (Success)
 */
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}
	return (m);
}
