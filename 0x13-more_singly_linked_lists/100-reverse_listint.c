#include "lists.h"

/**
  * reverse_listint - Used to reverse a list
  * @head: the list
  * Return: The reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
