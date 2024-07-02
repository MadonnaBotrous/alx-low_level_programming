#include "main.h"

/**
 * print_rev - resets the value of an int var to 98
 * @s: string to be mesuared
 * Return: the value of i
 */

void print_rev(char *s)
{
int i  = 0;

while (*(s + i) != '\0')
{
	i++;
}

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
