#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: The string to uppercase
 *
 * Return: char* the string modified
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int add_to;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			    ')', '{', '}'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; separators[j]; j++)
		{
			if (s[i] == separators[j] && s[i + 1] && s[i + 1] >= 97
			    && S[i + 1] <= 122)
			{
				add_to = s[i + 1] - 97;
				s[i + 1] = 65 + add_to;
			}
		}
	}
	return (s);
}
