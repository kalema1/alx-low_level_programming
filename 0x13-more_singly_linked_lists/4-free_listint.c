#include "lists.h"
#include <stdlib.h>

/**
* free_listint - free list
* @head: pointer to the list
*
* Return: no value
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
