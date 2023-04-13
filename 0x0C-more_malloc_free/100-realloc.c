#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _realloc - rellacates a memory block
* @ptr: pointer to previosly located memory
* @old_size: size for ptr
* @new_size: new size of new memory block
*
* Return: no value
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
