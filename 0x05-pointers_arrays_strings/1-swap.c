#include "main.h"
/**
 * swap_int -swaps the values of two integers
 * @a: first interger
 * @b: interger to be swapped with first interger
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
 }
