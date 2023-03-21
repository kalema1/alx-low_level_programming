#include <ctype.h>

/**
* _isalpha - checks upper case
* @c: value to be checked
*
* Return: value 1 if yes
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
