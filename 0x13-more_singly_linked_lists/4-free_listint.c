#include "lists.h"

/**
  * free_listint - Used to free space used by list
  * @head: The lists to free
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
