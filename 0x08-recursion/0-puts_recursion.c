#include "main.h"

/**
 * _puts_recursion - function to print a string followed by a new line
 * @s: string to print
 * Return: void value
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}