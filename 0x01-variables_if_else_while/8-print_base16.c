#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -= Entry point
 *
 *code to print base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char la;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	for (la = 'a'; la <= 'f'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
