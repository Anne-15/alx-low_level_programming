#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: character to print
 * @accept: character
 * Return: 1
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		
		while (accpet[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}

			j++;
		}

		if (accept[j] != '\0')
			break;

		i++;
	}

	return (c);
