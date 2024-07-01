#include "main.h"

/**
 * _strlen - resets the value of an int var to 98
 * @s: string to be mesuared
 * Return: the value of i
 */

int _strlen(char *s)
{
int i  = 0;

while (*(s + i) != '\0')
{
	i++;
}
return (i);
}
