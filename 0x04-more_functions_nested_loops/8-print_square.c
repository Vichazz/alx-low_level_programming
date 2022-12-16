#include "main.h"
/**
 * print_square - start program
 * @size: function parameter
 */
void print_square(int size)
{
int counter;
int hash;
if (size > 0)
{
for (counter = 0; counter < size; size++)
{
for (hash = 0; hash < size; hash++)
_putchar('#');
if (counter == size - 1)
continue;
_putchar('\n');
}

}
_putchar('\n');

}
