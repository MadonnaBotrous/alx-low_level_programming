#include "main.h"
/**
 * print_diagonal - a function to print a diagonal
 * @n - the lengh of the diagonal
 * return: void
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++) 
{
// Print spaces for each row
for (j = 0; j < i; j++) 
{
_putchar(' ');
}
// Print the backslash
_putchar('\\');
_putchar('\n');
}
}
