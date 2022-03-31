#include "main.h"

/**
 * factorial - function to print the factorial of a number
 * @n: number to get the factorial
 * Return: an int value of the result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		factorial(n) = n * factorial(n - 1);
	}
}
