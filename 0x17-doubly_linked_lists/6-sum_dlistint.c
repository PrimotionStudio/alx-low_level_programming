#include "lists.h"

/**
  * sum_dlistint - sum
  * @head: arg
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p, *nx;
	int sum = 0;

	if ((head == NULL) && (head->prev == NULL))
		return (sum);
	if (head->prev != NULL)
	{
		p = head;
		while (p->prev != NULL)
		{
			sum += p->n;
			p = p->prev;
		}
	}
	if (head->next != NULL)
	{
		nx = head;
		while (nx != NULL)
		{
			sum += nx->n;
			nx = nx->next;
		}
	}
	return (sum);
}
