#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - delete node at index
* @head: double pointer to the list
* @index: index
*
* Return: value 1 on success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	cur = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	next = cur->next;
	cur->next = next->next;
	free(next);
	return (1);
}
