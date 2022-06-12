#include "main.h"

/**
 */
char *string_toupper(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - 32;
		}
	}

	return (n);
}
