#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* add_node - adds node
* @head: double pointer to the list
* @str: new string aded to d node
*
* Return: addres of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
