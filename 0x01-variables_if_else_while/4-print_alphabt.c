#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k',
			'l',
		   'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x',
		   'y', 'z', '\0'};
	int i;


	for (i = 0; i <= 23; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
