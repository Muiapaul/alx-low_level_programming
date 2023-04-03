#include "main.h"
/**
 * _memcpy -copies memory area
 * @dest: where memory area is to be copied
 * @src: source
 *@n: number of bytes
 * Return: Alway n (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int a = n;

	for (; m < a; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

