#include "main.h"

/**
* _isupper - tests character case
* @c: test value
*
* Return: value 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
