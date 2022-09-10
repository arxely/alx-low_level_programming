#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l',
		   'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		   'y', 'z', '\0'};
	for (i = 25; alpha[i]; i--)
	{
		putchar(alpha[i]);
	}
	putchar(10);
	
	return (0);
}
