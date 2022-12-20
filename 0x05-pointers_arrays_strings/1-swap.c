#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: function parameter 1
 * @b: function parameter 2
 */
void swap_int(int *a, int *b)
{
int alt = *a;
*a = *b;
*b = alt;
}
