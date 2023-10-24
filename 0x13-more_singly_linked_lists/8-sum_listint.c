#include "lists.h"

/**
  * sum_listint - Used to sum all the num in a list
  * @head: the lists
  * Return: The sum of 0
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nodes = head;

	while (nodes != NULL)
	{
		sum += nodes->n;
		nodes = nodes->next;
	}
	return (sum);
}
