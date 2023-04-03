#include "main.h"
/**
 * _strspn -gets the length of a prefix substring
 * @s: input
 * @accept: input
 *Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				a++;
				break;
			}
			else if (accept[m + 1] == '\0')
			return (a);
		}
		s++;
	}
	return (a);
}




