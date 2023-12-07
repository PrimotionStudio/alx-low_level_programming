#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint - Used to add to the top of the list
  * @head: the top
  * @n: The value
  * Return: The new list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
