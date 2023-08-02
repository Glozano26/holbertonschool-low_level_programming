#include "lists.h"


/**
 * add_node_end - function that adds a new node at the end
 * @head: pointer
 *@str: string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode;

		lastNode = *head;

		while (lastNode->next != NULL)
		{
		lastNode = lastNode->next;
		}
	lastNode->next = newNode;
	}
	return (*head);
}
