#include "main.h"

/**
* _strcpy - copy a string pointer
* @dest: abuffer to copy the string
* @src: the source of string
*
* Return: no value
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
