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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(I));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
