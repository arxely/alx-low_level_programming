#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the destination string of the copy
 * @src: the source string to copy
 * @n: the number of bytes to copy
 * Return: char* the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
