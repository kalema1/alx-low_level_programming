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
	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
