#include "lists.h"

/**
 * sum_listint - function to return the sum of the numbers in the list
 * @head: pointer to the list
 * Return: the sum of the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
