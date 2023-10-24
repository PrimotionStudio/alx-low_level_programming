#include "lists.h"

/**
  * rec_free - Recursively free a list
  * @head: the list
  */
void rec_free(listint_t *head)
{
	if (head ==  NULL)
		return;
	rec_free(head->next);
	free(head);
}
/**
  * free_listint2 - Used to free a list and sets the head to NULL
  * @head: The head of the list
  */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	rec_free(*head);
	*head = NULL;
}
