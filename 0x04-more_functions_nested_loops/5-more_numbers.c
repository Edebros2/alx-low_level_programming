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
	char c;
	int a;

	a = 0;
	while (a < 10)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

