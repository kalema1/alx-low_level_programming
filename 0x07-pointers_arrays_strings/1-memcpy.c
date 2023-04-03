#include "main.h"

/**
* _memcpy - copy memory data
* @dest: area to copy data to
* @src: area to copy data from
* @n: bytes of memory
*
* Return: charater value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
