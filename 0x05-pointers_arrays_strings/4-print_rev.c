#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new
 * line.
 * @s: string to reverse
 * Return: none
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		count++;
	}
	for (j = count; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
