#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * a program that finds and prints the largest
 * prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1

		while (n % 2 == 0)
		{
			max = 2;
			n /= 2;
		}
	for (i = 3; i < = sqrt(n); i = 1 + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%d", max);
	return (0);
}
