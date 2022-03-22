#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s - string to be printed
 */
void print_rev(char *s)
{
	int i, j, len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
	_putchar('\n');
}
