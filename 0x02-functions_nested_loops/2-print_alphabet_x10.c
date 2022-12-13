#include "main.h"

/** 
 * print_alphabet_x10 - start program
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
char count;
char alpha;
for (count = '0'; count <= '9'; count++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar(count);
}
}
