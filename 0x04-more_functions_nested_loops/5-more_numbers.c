#include "main.h"

/**
 * more_numbers - program entry point
 */

void more_numbers(void)
{
int counter;
int digits;
for (counter = 0; counter <=  9; counter++)
{
for (digits = 0; digits <= 14; digits++)
{
if (digits > 9)
{
_putchar((digits / 10) + '0');
}
_putchar(digits % 10 + '0');
}
_putchar('\n');
}
}
