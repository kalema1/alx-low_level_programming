#include "main.h"

/**
* last_index - returns last index of a string
* @s: pointer string
*
* Return: value n
*/
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
* is_palindrome - check for palindrome
* @s: string to check
*
* Return: value 0 or 1
*/
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
* check - checker for palindrome
* @s: string
* @start: moves from right
* @end: moves from left
* @pair: integer
*
* Return: values 0 or 1
*/
int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
