#include "main.h"

/**
* _strncat - cancatenate 2 strings
* @dest: first string
* @src: second string
* @n: limit for src string
*
* Return: character cancatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
