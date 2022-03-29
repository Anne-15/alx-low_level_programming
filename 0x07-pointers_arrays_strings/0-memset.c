#include "main.h"

/**
 * _memset - function fills the first
 * 
 * @s: pointer to memory area to fill
 * @n: number of bytes to fill
 * @b: constant byte
 *
 * Returns a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n = i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
