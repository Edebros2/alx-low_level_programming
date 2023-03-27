#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * a function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	m = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}		
