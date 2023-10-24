#include "lists.h"

/**
  * delete_nodeint_at_index - Delete Node
  * @head: The list
  * @index: The index
  * Return: 1 if ok -1 if not
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	while (i < index)
	{
		prev = cur;
		if (cur == NULL)
			return (-1);
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
		return (-1);
	prev->next = cur->next;
	free(cur);
	return (1);
}
