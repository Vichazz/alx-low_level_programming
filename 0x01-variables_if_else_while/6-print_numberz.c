#include <stdio.h>

/**
 * main - program entry
 * Return: returns 0
 */

int main(void)
{
int digits;

for (digits = 0; digits < 10; digits++)
putchar(digits % 10 + '0');
putchar('\n');
return (0);

}
