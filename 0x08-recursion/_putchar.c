#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - prints a character to the stdout
 *
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
