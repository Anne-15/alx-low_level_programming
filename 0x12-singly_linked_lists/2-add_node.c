#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t*) malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str ==NULL)
		return (NULL);

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
