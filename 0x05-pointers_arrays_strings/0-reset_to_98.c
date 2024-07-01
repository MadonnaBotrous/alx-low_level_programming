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

    printf("n = %d\n", n);  // Print the initial value of n (may be undefined)

    reset_to_98(&n);
    printf("n = %d\n", n);

    return 0;
}
