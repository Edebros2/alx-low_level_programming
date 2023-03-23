#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that prints the sum of
 * all multiples of 3 and 5 below 1024
 * @i: value
 * @sum: variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
