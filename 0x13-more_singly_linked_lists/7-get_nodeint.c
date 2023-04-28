#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - return nth node of list
* @head: pointer to first node
* @index: position of node
*
* Return: node address
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
