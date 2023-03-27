#include "main.h"

/**
* swap_int - swap int values
* @a: value 1
* @b: value 2
*
* Return: no value
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
