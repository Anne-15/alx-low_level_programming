#include "main.h"
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, c, w;
	
	flag = 0;
	w = 0;
	
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **num, *temp;
	int i, k = 0, count = 0, words, c = 0, start, end;

	while(*(str + count))
	{
		count++;
	}

	words = count_words(str);

	if (words == 0)
		return (NULL);

	num = (char **) malloc(sizeof(char *) * (words + 1));
	
	if (num == NULL)
		return (NULL);
	
	for (i = 0; i <= count; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));

				if (temp == NULL)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				num[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = 1;
	}

	num[k] = NULL;
	return (num);
}
