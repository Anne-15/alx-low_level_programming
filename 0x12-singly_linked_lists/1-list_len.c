#include "lists.h"
#include <stdio.h>

/**
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	list_t temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
