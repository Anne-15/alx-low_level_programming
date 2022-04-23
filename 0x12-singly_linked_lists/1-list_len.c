#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets the length of the list
 * @h: pointer to the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
