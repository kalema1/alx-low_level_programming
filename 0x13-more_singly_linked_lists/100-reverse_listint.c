#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - reverses a list
* @head: double pointer to the list
*
* Return: address
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = next;
	}
	*head = pr;
	return (*head);
}
