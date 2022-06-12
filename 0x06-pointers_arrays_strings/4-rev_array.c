#include "main.h"

/**
 */
void reverse_array(int *a, int n)
{
	int c, b, temp;

	b = n - 1;

	for (c = 0; c < n / 2; a++)
	{
		temp = a[c];
		a[c] = a[b];
		a[b--] = temp;
	}
}
