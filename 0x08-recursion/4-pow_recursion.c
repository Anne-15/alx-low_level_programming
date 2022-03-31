#include "main.h"

/**
 * _pow_recursion - function to return the value of @x raised to power of @y
 * @x: number
 * @y: power to the number @x
 * Return: the power of two numbers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
