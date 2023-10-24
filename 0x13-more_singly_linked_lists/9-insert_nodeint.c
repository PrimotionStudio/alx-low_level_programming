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
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cur = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (newNode == NULL)
		return (NULL);
	if (cur == NULL)
		return (NULL);
	while (i < idx)
	{
		cur = cur->next;
		if (cur == NULL)
			return (NULL);
	}
	newNode->next = NULL;
	temp = cur->next;
	newNode->n = n;
	newNode->next = temp;
	cur = newNode;
	free(temp);
	return (newNode);
}
