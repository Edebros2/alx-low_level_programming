#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * code to print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
