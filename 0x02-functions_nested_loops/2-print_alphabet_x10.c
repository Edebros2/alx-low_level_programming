#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * code to print th alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num = 0;

	while (num <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		++num;
	}
}
