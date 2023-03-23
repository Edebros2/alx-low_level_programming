#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * a function that prints time
 * Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 24)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

