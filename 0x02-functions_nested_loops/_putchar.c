#include <unistd.h>
/**
 *_putchar -prints _putchar, followed by a new line.
 *@c: the character to print
 *Return: Always 1 (Success)
 *Always -1 (error)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
