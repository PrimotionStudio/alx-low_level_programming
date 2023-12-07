#include <stdio.h>
#include "lists.h"

/**
  * print_dlistint - Get the size of a doubly linked list
  * @h: the list
  * Return: The size
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
