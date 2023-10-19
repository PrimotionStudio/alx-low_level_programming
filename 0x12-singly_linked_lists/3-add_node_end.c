#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - Used to add a node to the end of a list
  * @head: The start of the list
  * @str: The string to add
  * Return: The address of the newNode
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode;
	list_t *tempNode;

	while (str[i] != '\0')
		i++;
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tempNode = *head;

		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		tempNode->next = newNode;
	}
	return (newNode);
}
