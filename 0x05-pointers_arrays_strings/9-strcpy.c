#include "main.h"
/**
 * _strcpy -copies the string pointed to
 * @dest: destination
 * @src: source
 * Return: Always string (Success)
*/
char *_strcpy(char *dest, char *src)
{
	int muia = 0;

		while (*(src + muia) != '\0')
		{
		*(dest + muia) = *(src + muia);
		muia++;
		}
	*(dest + muia) = '\0';
	return (dest);
}
