#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of the list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while(h != 0)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}

	return (s);
}
