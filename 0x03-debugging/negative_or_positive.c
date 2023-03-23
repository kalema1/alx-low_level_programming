#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* positive_or_negative - give either positve or negative
* @i: value to be tested
*
* Return:no value
*/
void positve_or_negative(int i)
{
	int i;

	srand(time((0));
	i = rand() - RAND_MAX / 2;
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
	return;
}
