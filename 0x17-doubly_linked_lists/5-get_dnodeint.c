#include "lists.h"

/**
  * get_dnodeint_at_index - get node
  * @head: The head
  * @index: index
  * Return: dlistint_t
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *hd = head, *demo = head;
	unsigned int i = 0, len = 0;

	while (demo != NULL)
	{
		len++;
		demo = demo->next;
	}
	if (index >= len)
		return (NULL);
	while (hd != NULL)
	{
		if (i == index)
		{
			return (hd);
		}
		i++;
		hd = hd->next;
	}
	return (NULL);
}
