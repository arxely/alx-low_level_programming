#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: a first string to concatenate
 * @src: The string to concatenate at the end of @dest
 * @n: The number of bytes to concatenate
 * Return: char* The resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (i = i, j = 0; j <= n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
