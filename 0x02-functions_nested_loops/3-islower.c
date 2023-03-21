#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * _islower - Entry point
 * @c: variable containing letters of alphabet
 * a function that checks for lowercase character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
