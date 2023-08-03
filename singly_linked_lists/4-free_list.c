#include "lists.h"
/**
 * free_list - function that adds a new node at the end
 * @head: pointer
 * Return: the address of the new element
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
