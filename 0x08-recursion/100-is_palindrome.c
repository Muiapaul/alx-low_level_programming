#include "main.h"
int check_pal(char s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome -returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: Always 1 if palindrome (Success) otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(*s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion -returns length of string
 * @s: string
 * Return: Always length of string (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal -checks characters recursively fo palindrome
 *@s: string
 *@i: iterator
 *@len: length of string
 *Return: Always 1 if palindrome (Success) otherwise 0
 */
int check_pal(char s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
