#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate a memory
 * @b: the number to allocate memory for
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;

	i = malloc(b);
	if (i == NULL)
		return (98);

	return (i);
}
