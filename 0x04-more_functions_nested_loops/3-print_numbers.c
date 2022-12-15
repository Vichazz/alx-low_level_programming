#include "main.h"

/**
 * print_numbers - print numbers in program
 * Return: return 0
 */

void print_numbers(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
_putchar(digit % 10 + '0');
return (0);
}
