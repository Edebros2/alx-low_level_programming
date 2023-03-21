#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * _isalpha - Entry point
 * a function that checks for an alphabetic character
 * @c: variable containing the values
 *
 * Return: 1 if value is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
