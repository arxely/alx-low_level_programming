#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of
 * integers.
 * @a: The string to reverse
 * @n: The lenght of the array
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int tmp[n];
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		tmp[i] = a[i];
	}
	a = tmp;
}
