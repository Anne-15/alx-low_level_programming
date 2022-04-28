#include "lists.h"

/**
 * free_listint - function that frees a node
 * @head: pointer to the list
 *
 * Return: null
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
