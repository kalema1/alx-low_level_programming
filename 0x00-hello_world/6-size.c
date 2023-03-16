#include <stdio.h>

/**
 * main - prints value of variable types
 *
 * Return: value 0 will be returned
 */
int main(void)
{
	int i;
	long int I;
	long long int L;
	char c;
	float f;
	printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), "byte(s)");
	printf("Size of an int: %lu %s\n", (unsigned long)sizeof(i), "bytes(s)");
	printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(I), "bytes(s)");
	printf("Size of long long int: %lu %s\n", (unsigned long)sizeof(L), "bytes(s)");
	printf("Size of a float: %lu %s\n", (unsigned long)sizeof(f), "bytes(s)");
	return (0);
}
