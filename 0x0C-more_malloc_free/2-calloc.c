#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: the number of elements
 * @size: the size of the element type
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		s[i] = 0;

	return (s);
}
