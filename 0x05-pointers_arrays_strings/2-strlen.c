#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to count
 * Return: the number of character of the string
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		count++;
	}
	return (count);
}
