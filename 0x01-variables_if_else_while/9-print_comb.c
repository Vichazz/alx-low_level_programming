#include <stdio.h>

/**
 * main - starting point
 * Return: returns 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num % 10 + '0');
if (num < 9)
putchar(',');
putchar(' ');
}
return (0);
}
