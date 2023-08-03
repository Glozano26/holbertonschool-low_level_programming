#include "lists.h"

/**
 *print_dlistint_len - function that prints all the elements
 *@h: constan pointer
 *Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{

		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
