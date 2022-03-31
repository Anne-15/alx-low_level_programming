#include "main.h"

/**
 * _strlen_recursion - function to print the length of a string
 * @s: string to count
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == 0)
		return (0);

	_putchar(*s);
	count = _strlen_recursion(s++);
}
