#include <stdio.h>
/**
 * main - This program prints the size of each data type
 * Return: 0
 */

int main(void)
{
	char c;
	int d;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
