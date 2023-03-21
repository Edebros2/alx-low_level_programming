#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 *  a program that prints all possible combinations of two two-digit numbers.
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				if (i != 98 || j != 99)
				{
					putchar((i / 10) + 48);
					putchar((i % 10) + 48);
					putchar(' ');
					putchar((j / 10) + 48);
					putchar((j % 10) + 48);
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
