#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
