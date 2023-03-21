#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * print_sign - Entry point
 * @n: the number value specified
 * function to print the sign of a number
 *
 * Return: 1 if n > 0, 0 if n  = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
