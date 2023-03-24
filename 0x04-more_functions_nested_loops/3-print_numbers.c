#include "main.h"
#include <stdio.h>


/**
 * print_numbers - Entry point
 * function that prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a < '10'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
