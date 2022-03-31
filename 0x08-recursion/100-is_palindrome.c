#include "main.h"

/**
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

int strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen_recursion(s + 1));
	}
	return (0);
}

int is_palindrome(char *s)
{
	int i = 0;
	int count = strlen_recursion(s) - 1;

	return (checker(s, count, i));
}
