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
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l',
		   'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		   'y', 'z', '\0'};
	char ALPHA[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z', '\0'};
	int i;


	for (i = 0; i <= 25; i++)
	{
		putchar(alpha[i]);
	}

	for (i = 0; i <= 25; i++)
	{
		putchar(ALPHA[i]);
	}
	putchar('\n');

	return (0);
}
