#include "main.h"

/**
* get_endianness - checkes endianness
*
* Return: valu 0 or 1
*/
int get_endianness(void)
{
	unsigned int i;
	char *c = (char *) &i;

	return (*c);
}
