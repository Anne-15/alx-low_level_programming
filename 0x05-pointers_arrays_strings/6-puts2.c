#include "main.h"

/**
 * puts2 - prints one character out of 2 of a string
 * followed by a new line
 * @str - string to print out the char from
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		str[len]++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
