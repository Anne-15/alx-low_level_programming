#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to check, return NULL if the character is not found
 * @c: the character we are looking for
 * Return: a pointer to the first occurence of the character @c in the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
