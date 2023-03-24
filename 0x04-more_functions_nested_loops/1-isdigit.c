#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * _isdigit - function
 * @c: character to check
 * a function that checks for a digit 0 through 9
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	char c;

	c = '0';
	printf("%c, %d", c, _isdigit(c));
	return (0);
}
