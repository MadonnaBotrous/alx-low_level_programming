#include "main.h"

/**
 * _puts - resets the value of an int var to 98
 * @str: string to be printed
 * Return: On success 0
 */

void _puts(char *str)
{
int i  = 0;

while (*(str + i) != '\0')
{
	_putchar(*(str + i));
	i++;
}
_putchar('\n');
}
