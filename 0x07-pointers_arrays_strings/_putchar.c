#include <unistd.h>
/**
 * _putchar -writes character to stdout
 * @c: char to be printed
 * Return: Always 1 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
