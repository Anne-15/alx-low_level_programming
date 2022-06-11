#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char sh;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (sh = 'a'; sh <= 'f'; sh++)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
