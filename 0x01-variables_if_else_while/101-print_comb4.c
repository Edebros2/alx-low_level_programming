#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * a program that prints all possible different combinations of three digits
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b && b < c)
				{

					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar((c % 10) + '0');
					if (a != 7 || b != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
