#include <unistd.h>

/**
* _putchar - write character to stdout
* @c: the character to print
*
* Return: On success 1
* On error, -1 is reutrned, and errno is set appropriatly.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

