#include <stdio.h>

/**
 * main - program to print the lower case,
 * alphabet 10 times,
 * in a new line
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	i = 0;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

