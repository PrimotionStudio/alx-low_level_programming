#include "lists.h"

/**
  * free_dlistint - Frre
  * @head: The list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
