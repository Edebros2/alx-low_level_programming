#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: input string
 * @counter: moves the current character from the terminating null byte
 * to the character before it so that printing can start from there
 *
 * Return: s in reverse form
 */

void _print_rev_recursion(char *s)
{
	int counter = 1;

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + counter);
	_putchar(*s);
}
