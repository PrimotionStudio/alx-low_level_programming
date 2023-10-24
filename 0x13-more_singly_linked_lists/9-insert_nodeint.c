#include "lists.h"

/**
  * insert_nodeint_at_index - Used to insert node at a position
  * @head: The list
  * @idx: The position
  * @n: The data
  * Return: THe address ofthe newNode
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cur = *head;
	listint_t *temp = NULL;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < idx)
	{
		temp = cur;
		i++;
		if (cur == NULL)
		{
			free(newNode);
			return (NULL);
		}
		cur = cur->next;
	}


	newNode->next = cur;
	temp->next = newNode;
	return (newNode);
}
