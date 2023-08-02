#include "lists.h"
/**
  *list_len - returns the number of elements
  *@h: pointer parameter
  *Return: the number of node
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	const list_t *current = h;

	while (current != NULL)
	{
	i++;
	current = current->next;
	}

	return (i);
}
