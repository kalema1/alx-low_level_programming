#include "lists.h"
#include <stdio.h>

/**
* print_listint - print all elements
* @h: pointer to the lists
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
