#include "main.h"

/**
* _strlen - give length of the string
* @s: string
*
* Return: value of string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
