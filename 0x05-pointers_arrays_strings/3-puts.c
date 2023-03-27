#include "main.h"
/**
 * _puts  -print a string to stdout
 * @str: the string
 * return: the length of the string
*/
void _puts(char *str)
{
	Int a = 0;

	while (*str[a] !=  '\0')
	{
		_putchar(*str[a]);
		a++;
	}
	_putchar('\n');
}

