#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * _abs - Entry point
 * function that computes the absolute value of an integer
 * @r: variable containing the number
 *
 * Return: Always 0 (Success)
 */

int _abs(int r)
{
	if (r > 0)
	{
		_putchar((r % 10) + '0');
	}
	else if (r == 0)
	{
		_putchar((r % 10) + '0');
	}
	else
	{
		r = -r;
		_putchar((r % 10) + '0');
	}
	return (0);
}
