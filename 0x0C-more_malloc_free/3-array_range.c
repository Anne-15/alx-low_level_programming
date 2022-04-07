#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: smallest integer in array
 * @max: largest int in the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));

	if (s == NULL)
		return (NULL);
	
	for (i = min; i <= max; i++)
	{
		s[j] = 1;
		j++;
	}

	return (s);
}
