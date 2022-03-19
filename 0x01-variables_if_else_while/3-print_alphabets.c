#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main functions
 * to print alphabets in lowercase, followed by uppercase
 * and a new line
 * Return: Always 0 (Success)
 */
int main (void)
{
	int ch, CH;

	for (ch = 'a'; ch < = 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH < = 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
