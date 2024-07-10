#include "main.h"
/**
 * puts_recursion - prints a string using rec
 * @s : astring to be processed
 * return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
}
_putchar('\n');
return;
{
_putchar(*s);
puts_recursion(s + 1);
}
