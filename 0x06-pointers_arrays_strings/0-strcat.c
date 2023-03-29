#include "main.h"

/**
* _strcat - cancatenate 2 strings
* @dest: first string
* @src: second string
*
*Return: charater value
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
