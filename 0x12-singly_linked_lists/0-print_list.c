#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - Prints the values of a singly linked list
  * @h: list to be printed
  * Return: Returns the number of nodes visited
  */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i - 1);
}
