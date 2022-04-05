#include <stdio.h>
#include "main.h"

/**
 * mul - function to muliply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the product of two numbers
 */
int mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
 * main - functio to muliply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	
	num1 = mul(argv[1]);
	num2 = mul(argc[2]);

	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
