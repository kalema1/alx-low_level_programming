#include "main.h"

/**
* rot13 - encoder rot13
* @s: ponter to the string parameters
*
* Return: value s
*/
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[i])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
