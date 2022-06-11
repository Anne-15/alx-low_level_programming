#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @s: the int to extract the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int s)
{
	int i;

	if (s < 0)
		s = -s;

	i = s % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
