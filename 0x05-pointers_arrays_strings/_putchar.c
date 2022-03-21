#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On 1 success
 * On error, -1 is returned and errno is set apparently
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
