#include "lists.h"

/**
  * add_nodeint_end - Add a new node to the end of the list
  * @head: The lists
  * @n: the data
  * Return: THe address of the new NOde
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur = NULL;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	cur = *head;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = newNode;

	return (newNode);
}
