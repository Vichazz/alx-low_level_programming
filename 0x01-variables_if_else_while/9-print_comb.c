#include <stdio.h>

/**
 * main - starting point
 * Return: returns 0
 */
int main(void)
{
int n;
for (n = 0; n < 10;)
{
putchar(n % 10 + '0');
n++;
if (n < 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
