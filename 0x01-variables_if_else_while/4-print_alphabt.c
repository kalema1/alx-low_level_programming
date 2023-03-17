#include <stdio.h>

/**
 * main - prints all except e and q
 *
 * Return: value 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxwz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
