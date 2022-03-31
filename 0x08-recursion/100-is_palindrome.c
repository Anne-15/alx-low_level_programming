#include "main.h"

/**
 * checker - checks the string
 * @strlen: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts with 0
 *
 * Return: 1 if its a palindrome and 0 if its not
 */
int checker(char *strlen, int i, int len)
{
	if (i < len && strlen[i] == strlen[len])
	{
		return (checker(strlen, len -1, i + 1));
	}
	if (strlen[i] != strlen[len])
	{
		return (0);
	}
	return (1);
}

/**
 * strlen_recursion - returns the length of a string
 * @s: the string to check the length
 * Return: an integer that displays the length of a string
 */
int strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 * Return: 1 if its a palindrome, else return 2
 */
int is_palindrome(char *s)
{
	int i = 0;
	int count = strlen_recursion(s) - 1;

	return (checker(s, count, i));
}
