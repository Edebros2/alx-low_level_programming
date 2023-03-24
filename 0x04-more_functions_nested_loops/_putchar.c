#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: value to print
 * function to print a character
 *
 * Return: 1 if success
 * On error , -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
