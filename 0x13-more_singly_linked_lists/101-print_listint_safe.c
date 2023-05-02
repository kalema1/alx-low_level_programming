#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* loop_of_listint - find number of nodes
* @head: pointer to the list
*
* Return: value 0
*/
size_t loop_of_listint(const listint_t *head)
{
	const listint_t *tor, *h;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
	{
		exit(98);
	}
	tor = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (tor == h)
		{
			tor = head;
			while (tor != h)
			{
				nd++;
				tor = tor->next;
				h = h->next;
			}
			tor = tor->next;
			while (tor != h)
			{
				nd++;
				tor = tor->next;
			}
			return (nd);
		}
		tor = tor->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
* print_listint_safe - print list
* @head: double pointer to the list
*
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, i = 0;

	nd = loop_of_listint(head);
	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nd; i++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (nd);
}
