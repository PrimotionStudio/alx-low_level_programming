#include "lists.h"

/**
  * get_nodeint_at_index - Gets the node at an index from 0
  * @head: the node;
  * @index: The index
  * Return: the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
