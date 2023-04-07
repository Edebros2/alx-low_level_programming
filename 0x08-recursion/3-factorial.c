#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of any number
 * @n: input number
 *
 * Return: -1 as error, 1 if n = 0, factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
