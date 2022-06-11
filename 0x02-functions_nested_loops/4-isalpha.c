#include "main.h"

/**
 * _isalpha - function that checks for alphabet characters
 * @c: the letter, lowerecase or uppercase
 * Return: 1 if true otherwise return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
