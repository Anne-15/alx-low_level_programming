#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of times to print array
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			print(", %d", a[i]);
		}
	}
	printf("\n");
}
