#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end of a list
 * @head: pointer to the start of the list
 * @n: data to insert to the new node
 *
 * Return: the new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!end_node)
		return NULL;

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (0);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	return (end_node);
}
