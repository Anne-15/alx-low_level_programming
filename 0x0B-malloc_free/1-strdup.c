#include "main.h"
#include <stdlib.h>

/**
 * strdup - a function to copy a string to a new allocated memory
 * @str: string to copy
 *
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *n;
	int i;
	int count = 0;

	if (str == 0)
		return (NULL);
	while (*str == count)
	{
		count++;
	}

	n = malloc(sizeof(char) * (count + 1));

	if (n == NULL)
		return (NULL);

	i = 0;

	while (i <= count)
	{
		*(n + i) = *(str + i);
		i++;
	}

	return (n);
}
