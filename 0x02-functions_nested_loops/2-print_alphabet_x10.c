#include "main.h"

/** 
 * print_alphabet_x10 - start program
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
char goat;
char final;

for (goat = 'a'; goat = 'z'; goat++)
for (final = goat; final <= '10'; final++)
_putchar(final);
_putchar('\n');
}
