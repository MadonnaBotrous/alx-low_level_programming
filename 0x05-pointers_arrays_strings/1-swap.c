#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: the fisrt intiger to be swapped
 * @b: the second intiger to be swapped
 */
void swap_int(int *a, int *b)
{
int temp
temp = *a;
*a = *b;
*b = temp;
}
