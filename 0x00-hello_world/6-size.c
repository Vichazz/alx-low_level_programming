#include <stdio.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char b;
int i;
long l;
long long g;
float f;
printf("Size of a char: %lu. \n", (unsigned long)sizeof(b));
printf("Size of a int: %lu. \n", (unsigned long)sizeof(i));
printf("Size of a long: %lu. \n", (unsigned long)sizeof(l));
printf("Size of a long long: %lu. \n", (unsigned long)sizeof(g));
printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));
return (0);
}
