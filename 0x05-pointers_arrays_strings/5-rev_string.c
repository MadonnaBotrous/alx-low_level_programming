#include "main.h"

/**
 * rev_string - check code
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
int i  = 0;
int j = 0;
char temp;

while (*(s + i) != '\0')
{
	i++;
}

for (j = 0; j < i; j++)
{
	i--;
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
}
}
