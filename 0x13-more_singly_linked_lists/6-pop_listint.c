#include "lists.h"

/**
  * pop_listint - Deletes the head node
  * @head: Thellist
  * Return: the data or 0
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
