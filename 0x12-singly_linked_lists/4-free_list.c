#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @head: The list to free
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
	else
	{
		free(head->str);
		free(head);
	}
}
