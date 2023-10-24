#include "lists.h"

/**
  * add_nodeint - Adds a new node to the head
  * @head: The head of the node
  * @n: data to hold
  * Return: the addr of the node or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode = (listint_t*)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
