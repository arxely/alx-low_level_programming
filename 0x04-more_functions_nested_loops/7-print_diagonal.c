#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal.
 * @n: number of \ to print
 * Return: None
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	if ( i <= 0)
		_putchar('\n');
}
