#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - array of integers
* @min: minimum value
* @max: maximum value
*
* Return: value 0 on success
*/
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
