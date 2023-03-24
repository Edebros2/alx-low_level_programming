#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Entry point
 *  a function that prints 10 times the numbers, from 0 to 14
 *
 *  Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

