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
		return (r);
	}
	else
	{
		r = -r;
		return (r);
	}
}
