#include "main.h"

/**
 * print_most_numbers - start program
 * Return: 0
 */

void print_most_numbers(void)
{
int digits;
for (digits = 0; digits <= 9; digits++)
if (digits != 2 && digits != 4)
_putchar((digits % 10) + '0');
_putchar('\n');
}
