#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: first node
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
