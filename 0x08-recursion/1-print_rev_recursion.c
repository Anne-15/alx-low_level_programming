#include "main.h"

/**
 * _print_rev_recursion - function to print the reverse of a string
 * @s: the string to print
 * Return: null value
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_putchar(*s);
	_print_rev_recursion(s + 1);
}
