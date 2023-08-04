#include "lists.h"

/**
 *sum_distint - function that returns the sum of all the data
 *@head: pointer node
 *Return: sum all datas
 */
int sum_dlistint(dlistint_t *head)

{
	int sum = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
