#include "lists.h"

/**
 * add_node_end - function to add node at the end of the list
 * @head: double pointer to the head of the list
 * @str: a given string
 *
 * Return: a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int len = 0;

	if (!str)
		return (NULL);
	if (end_node == NULL)
		return (NULL);

	end_node->next = NULL;
	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	while (str[len])
		len++;
	end_node->len = len;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = end_node;
	return (end_node);
}
