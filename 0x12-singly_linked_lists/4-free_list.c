#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list_t list
* @head: pointer to list to be freed
*
* Return: no value
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
