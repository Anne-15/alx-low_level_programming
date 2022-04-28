#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the linked list
 * @idx: index where the new node is added
 * @n: data to insert at the new node
 *
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new_node || !head)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}
