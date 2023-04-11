#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - return a pointer to 2 dimmensional array
* @width: with
* @height: height
*
* Return: value 0 on success
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (; x >= 0; x--)
				free(p[x]);
			free(p);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}
	return (p);
}
