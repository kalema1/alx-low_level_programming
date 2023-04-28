#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: pointer to the list
*
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
