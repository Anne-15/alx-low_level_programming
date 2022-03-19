#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * followed by a new line except q and e
 * Retur: Always 0 (success)
 */
int main(void)
{
	char = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
