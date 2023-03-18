#include <unistd.h>
/**
 * main -prints "and the piece of art is useful" dora korper 2015-10-19",
 * followed by a new line, to standard error.
 * Return: Always 0 (Success)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
