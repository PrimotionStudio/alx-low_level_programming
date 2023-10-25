#include "lists.h"

/**
  * print_listint_safe - Prints all the nodes in a list
  * @head: The list to be printed
  * Return: the number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while ((slow != NULL) && (fast != NULL) && (fast->next !=NULL))
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	return (count);
}
