#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a certain index
 * @head: pointer to the first node of the linked list
 * @index: the index of the node to return
 *
 * Return: pointer to the node we are looking for or NULL
 *
 */
int *get_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
