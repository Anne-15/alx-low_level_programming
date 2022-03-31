#include "main.h"

/**
 * is_prime_number - function that returns 1 if number is prime
 * @n: number to check if prime
 * Return: 1 if number is prime else 0
 */
int is_prime_number(int n)
{
	if (n % n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
