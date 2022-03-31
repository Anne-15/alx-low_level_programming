#include "main.h"

/**
 * _strlen_recursion - function to print the lebgth of a string
 * @s: the string to find the length
 * Return: an int value of the number of words
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
