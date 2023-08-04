#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node
 *@index: index
 *@head: pointer node
 *Return: Always EXIT_SUCCESS
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
