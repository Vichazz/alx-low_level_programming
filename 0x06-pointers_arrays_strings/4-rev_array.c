#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int tmp, in;

for (in = n - 1; in >= n / 2; in--)
{
tmp = a[n - 1 - in];
a[n - 1 - in] = a[in];
a[in] = tmp;
}
}
