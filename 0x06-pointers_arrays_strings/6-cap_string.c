#include "main.h"

/**
* cap_string - capitalize each word
* @s: character string to be capitalized
*
* Return: character string
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			continue;
		}
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}'))
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}

