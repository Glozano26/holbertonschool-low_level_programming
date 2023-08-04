#include "lists.h"

/**
 *free_dlistint -  function that frees a dlistint_t list
 *@head: pointer node
 *Return: Always EXIT_SUCCESS
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
