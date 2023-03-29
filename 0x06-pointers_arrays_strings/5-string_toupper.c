#include "main.h"
#include <ctype.h>

/**
* string_toupper - lower to upper character change
* @a: array of characters
*
* Return: character
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (islower(a[i]))
		{
			a[i] = toupper(a[i]);
		}
		else
		{
			a[i] = a[i];
		}
	}
	return (a);
}
