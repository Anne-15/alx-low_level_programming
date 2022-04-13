#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_array - function to search for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return index in the first element for which
 * the cmp function does not return 0
 */
int int_array(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
