#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatinate two strings
 * @s1: string to concatinate
 * @s2: another string to concatinate
 *
 * Return: a pointer to the new string created
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;
	int count1 = 0;
	int count2 = 0;

	while (s1 && s1[count1])
		count1++;

	while (s2 && s2[count2])
		count2++;

	s3 = malloc(sizeof(char) * (count1 + count2 + 1));

	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < count1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (count1 + count2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
