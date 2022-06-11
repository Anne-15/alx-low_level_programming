#include <stdio.h>

/**
 */
int main(void)
{
	int sh;

	for (sh = 'a'; sh <= 'z'; sh++)
		putchar(sh);
	for (sh = 'A'; sh <= 'Z''; sh++)
		putchar(sh);
	putchar('\n');
	return (0);
}
