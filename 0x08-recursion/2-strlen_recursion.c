#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to the input string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + n));
	}
}

