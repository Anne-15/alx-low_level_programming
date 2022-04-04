#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters starting with a character
 * @size: size of the arrays to create
 * @c: character to initialize to an array
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *n = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (n == NULL)
		return (0);

	while (i < size)
	{
		*(n + i) = c;
		i++;
	}
	*(n + i) = '\0';

	return(n);
}
