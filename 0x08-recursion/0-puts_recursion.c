#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: string input
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + n);
	}
	else
	{
		_putchar('\n');
	}
}
