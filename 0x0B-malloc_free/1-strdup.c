#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - copy of string
* @str: string
*
* Return: pointer to new space
*/
char *_strdup(char *str)
{
	int i, n = 0;
	char *p;

	if  (str == NULL)
		return (NULL);
	while (str[n] != '\0')
		n++;
	p = malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		p[i] = str[i];
	return (p);
}
