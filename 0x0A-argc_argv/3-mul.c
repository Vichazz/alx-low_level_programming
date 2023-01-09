#include <stdio.h>
#include <stdlib.h>

/**
 * main - program start
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int mul, par1, par2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
par1 = atoi(argv[1]);
par2 = atoi(argv[2]);
mul = par1 *par2;
printf("%d\n", mul);
return (0);
}
