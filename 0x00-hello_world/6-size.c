#include <stdio.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char b;
int i;
lon ing l;
long long int g;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
