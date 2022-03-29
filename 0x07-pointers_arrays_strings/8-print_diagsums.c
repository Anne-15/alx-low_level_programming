#include "main.h"

/**
 * print_diagsums - function that prints the sum of diagonal numbers
 * @a: pointer to an array
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int f, b;
	int i = 0;
	int j = 0;

	for (f = 0; f < size; f++)
	{
		i += *(a + f * sizeof(int));
	}

	for (b = 0; b < size; b++)
	{
		j += *(a + (size * b) + (size - b - 1));
	}
	 printf("%d, %d\n", i, j);
}
