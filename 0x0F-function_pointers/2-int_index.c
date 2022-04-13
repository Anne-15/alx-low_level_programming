#include <stdlib.h>
#include "function_pointers.h"

/**
 */
int int_array(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array  && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
