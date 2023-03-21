#include <ctype.h>

/**
* _islower - check if character is lower
* @c: number to be checked
*
* Return: value 1 if yes
* Retrun: value 0 if no
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
