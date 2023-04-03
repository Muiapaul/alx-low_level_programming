#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s:starting memory address
 * @b: the value
 * @n: bytes to be changed
 * Return: Always changed array with new value (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
