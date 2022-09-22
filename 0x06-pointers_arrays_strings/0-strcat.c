#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: char* the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (i = i, j = 0; src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
