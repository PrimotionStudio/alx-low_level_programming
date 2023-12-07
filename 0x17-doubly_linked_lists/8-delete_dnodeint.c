#include "lists.h"

/**
  * delete_dnodeint_at_index - del
  * @head: head
  * @index: i
  * Return: int
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *demo = *head, *hd = *head, *pr = NULL;
	unsigned int len = 0, i = 0;

	if (*head == NULL)
		return (-1);
	while (demo != NULL)
	{
		len++;
		demo = demo->next;
	}
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		if (tmp != NULL)
			tmp->prev = NULL;
		*head = tmp;
		return (1);
	}
	while (hd != NULL)
	{
		if (index == i)
		{
			tmp = hd->next;
			free(hd);
			if (tmp != NULL)
				tmp->prev = pr;
			pr->next = hd;
			return (1);
		}
		i++;
		pr = hd;
		hd = hd->next;
	}
	return (-1);
}
