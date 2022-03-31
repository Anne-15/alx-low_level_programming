#include "main.h"

/**
 * factorial - function to print the factorial of a number
 * @n: number to get the factorial
 * Return: an int value of the result
 */
int factorial(int n)
{
	int fact;

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
		fact(n) = n * factorial(n - 1);
	}

	return (fact);
}
