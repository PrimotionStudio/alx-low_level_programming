#include "lists.h"
#include <stdio.h>

/**
  * dlistint_len - The length of a dlist
  * @h: The list
  * Return: Teh e lenhg
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
