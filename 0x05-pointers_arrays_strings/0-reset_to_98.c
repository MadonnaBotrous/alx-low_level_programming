#include "main.h"
/**
 * Dereference the pointer and assign 98 to the value it points to
 */
void reset_to_98(int *n) 
{
    *n = 98;
}
int main(void)
{
    int n;

    _putchar("n = %d\n", n);
    reset_to_98(&n);
    _putchar("n = %d\n", n);

    return 0;
}
