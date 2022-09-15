#include <stdio.h>
#include "main.h"

/**
 * _islower -  checks for lowercase
 *@c: the caractr to checks
 *
 * Return: 1 is c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
