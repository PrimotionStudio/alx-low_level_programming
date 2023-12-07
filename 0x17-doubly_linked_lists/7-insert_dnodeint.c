#include "lists.h"

/**
  * insert_dnodeint_at_index - Insert
  * @h: h
  * @idx: i
  * @n: n
  * Return: a
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *demo = *h, *hd = *h, *pr = NULL;
	unsigned int len = 0, i = 0;

	while (demo != NULL)
	{
		len++;
		demo = demo->next;
	}
	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = hd;
		if (hd != NULL)
			hd->prev = new;
		*h = new;
		return (new);
	}
	while (hd != NULL)
	{
		if (idx == i)
		{
			new->prev = pr;
			if (pr != NULL)
				pr->next = new;
			new->next = hd;
			hd->prev = new;
			break;
		}
		i++;
		pr = hd;
		hd = hd->next;
	}
	return (new);
}
