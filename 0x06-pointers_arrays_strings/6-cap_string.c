#include "main.h"
/**
 * cap_string -capitalizes all words of a string
 * @muia: string to be capitalized
 * Return: Always pointer to capitalized string (Success)
*/
char *cap_string(char *muia)
{
	int index = 0;

	while (muia[index])
	{
		while (!(muia[index] >= 'a' && muia[index] <= 'z'))
			index++;
		if (muia[index - 1] == ' ' ||
				muia[index - 1] == '\t' ||
				muia[index - 1] == '\n' ||
				muia[index - 1] == ',' ||
				muia[index - 1] == ';' ||
				muia[index - 1] == '.' ||
				muia[index - 1] == '!' ||
				muia[index - 1] == '?' ||
				muia[index - 1] == '"' ||
				muia[index - 1] == '(' ||
				muia[index - 1] == ')' ||
				muia[index - 1] == '{' ||
				muia[index - 1] == '}' ||
				index == 0)
			muia[index] -= 32;
		index++;
	}
	return (muia);
}
