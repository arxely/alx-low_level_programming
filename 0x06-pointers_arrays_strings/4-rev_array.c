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
	int tmp;
	int i;
	int j;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
	a = tmp;
}
