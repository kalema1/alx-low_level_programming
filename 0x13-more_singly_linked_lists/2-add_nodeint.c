#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - add a new node at begginning
* @head: double pointer to the list
* @n: new number to be added
*
* Return: addreass of new number
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
