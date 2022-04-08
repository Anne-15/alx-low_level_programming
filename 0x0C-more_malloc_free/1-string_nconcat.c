#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to be copied
 * Return: char pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	if (size2 >= n)
		size2 = n;

	s = malloc(size1 + n + 1);
	if (s == NULL)
		return (s);

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[i + size1] = s2[i];
	}

	s[size1 + i] = '\0';

	return (s);
}
