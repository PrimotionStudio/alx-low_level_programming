#include "lists.h"

/**
  * add_dnodeint_end - Add node to the end
  * @head: The head of the node
  * @n: The va
  * Return: The new
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *hd = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (hd->next != NULL)
		hd = hd->next;
	hd->next = new;
	new->prev = hd;
	return (new);
}
