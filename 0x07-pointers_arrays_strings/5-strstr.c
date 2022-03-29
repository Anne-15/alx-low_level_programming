#include "main.h"

/**
 * _strstr - function to locate a substring
 * @haystack: string to search
 * @needle: occurrence to find
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
		{
			return (src);
		}

		haystack = src + 1;
	}

	return (0);
}
