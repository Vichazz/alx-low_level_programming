#include "main.h"

/**
 * print_numbers - print numbers in program
 */

void print_numbers(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
_putchar(digit % 10 + '0');
_putchar('\n');
}
