#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase.
 * @s: The string to uppercase
 *
 * Return: char * the resultint string
 */
char *string_toupper(char *s)
{
	int i;
	int to_add;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			to_add = s[i] - 97;
			s[i] = 65 + to_add;
		}
	}
	return (s);
}
