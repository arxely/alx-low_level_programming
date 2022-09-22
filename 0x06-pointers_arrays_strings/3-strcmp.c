#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int size_of_s1;
	int size_of_s2;
	int i;
	int result;

	size_of_s1 = 0;
	for (i = 0; s1[i]; i++)
	{
		size_of_s1 += s1[i];
	}

	size_of_s2 = 0;
	for (i = 0; s2[i]; i++)
	{
		size_of_s2 += s2[i];
	}

	result = size_of_s1 - size_of_s2;
	if (result < 0)
	{
		return (-15);
	}
	else if (result > 0)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
