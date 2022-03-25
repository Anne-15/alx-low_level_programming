#include "main.h"

/**
 * _strcat - concatinates n bytes from a string to another
 * @dest - destination string
 * @src - source string
 * @n - number of bytes of string to concatinate
 *
 * Return - a pinter to the resulting string n
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		src[j] = dest[i];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
