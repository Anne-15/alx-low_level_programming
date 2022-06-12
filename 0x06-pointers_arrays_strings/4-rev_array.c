#include "main.h"

/**
 * reverse_array - function that reverses the contents of an array
 * of ints
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int c, b, temp;

	b = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		temp = a[c];
		a[c] = a[b];
		a[b--] = temp;
	}
}
