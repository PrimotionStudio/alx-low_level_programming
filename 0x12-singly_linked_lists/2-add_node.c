#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - Add a new node to the begining of the list
  * @head: the pointer to the first element in the node
  * @str: String to be added
  * Return: the address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t*)malloc(sizeof(list_t));
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
