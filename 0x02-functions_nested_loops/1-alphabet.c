#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * print_alphabet - Entry point
 * function that prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
