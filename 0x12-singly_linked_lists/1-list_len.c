#include "lists.h"
#include <stddef.h>

/**
  * list_len - Returns the number of ellements
  * @h: List to check
  * Return: the number of elements in list h
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
