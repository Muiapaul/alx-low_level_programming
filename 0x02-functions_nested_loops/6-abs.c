#include "main.h"
/**
 * _abs -computes the absolute value of an integer.
 * @c: the number tobe computed
 * Return: Always absolute value of number (Success) or 0
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
