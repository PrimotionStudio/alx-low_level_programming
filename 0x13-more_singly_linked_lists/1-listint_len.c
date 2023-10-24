#include "lists.h"

/**
  * listint_len - Prints the number of nodes in a lists
  * @h: the list
  * Return: The number of node
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
