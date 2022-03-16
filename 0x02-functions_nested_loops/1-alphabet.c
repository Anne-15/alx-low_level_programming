#include <stdio.h>
#include "main.h"
/**
 * int_alphabet - check the code,
 * return alpabets in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
