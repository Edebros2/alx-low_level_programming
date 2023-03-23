#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Entry point
 * @n: value
 * a function that prints natural
 * numbers befor and after 98
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
