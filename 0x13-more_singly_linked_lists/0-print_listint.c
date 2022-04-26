#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function to print the list
 * @h: pointer to the list
 * Return: the list and number of elements
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
