#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;
	int second = 0;
	int k;

	for (k = 0; k < 10; k++)
	{
		j = 47;
		for (i = 48; i <= 62; i++)
		{
			if (i > 57)
			{
				second = 1;
			}
			if (second)
			{
				i = 49;
			}
			_putchar(i);
			if (second)
			{
				_putchar(j);
				j++;
				if (j == 51)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
