#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50 ; k <= 57; k++)
			{
				if (j > i && k > j)
			        {
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
