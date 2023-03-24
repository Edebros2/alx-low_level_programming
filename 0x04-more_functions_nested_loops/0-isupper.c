#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * a function that checks for uppercase character
 * @c: value in function
 *
 * Return: 1 if uppercase and 0 if other wise 0;
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
};
